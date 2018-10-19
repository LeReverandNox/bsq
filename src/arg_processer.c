/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_processer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laidet_r <laidet_r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 13:50:46 by laidet_r          #+#    #+#             */
/*   Updated: 2018/10/19 22:26:03 by laidet_r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libft.h"
#include "arg_processer.h"
#include "bsq.h"
#include "file_utils.h"
#include "string_utils.h"
#include "grid_utils.h"

int process_header(int fd, t_ctx *context)
{
	char *line;
	int len;

	line = read_line(fd);
	if (!line)
		return 0;
	len = ft_strlen(line);
	context->height = ft_atoi(line);
	line = remove_line_digits(line, len);
	len = ft_strlen(line);
	context->empty_c = get_n_last_char(line, len, 2);
	context->blocked_c = get_n_last_char(line, len, 1);
	context->full_c = get_n_last_char(line, len, 0);
	return validate_context_data(context);
}

int process_grid(int fd, t_ctx *context)
{
	char *line;
	char **grid;
	int i;

	grid = NULL;
	grid = malloc(sizeof(char *) * context->height);
	if (!grid)
		return 0;
	i = 0;
	while (i < context->height)
	{
		line = read_line(fd);
		if (!line)
			return 0;
		grid[i++] = line;
	}
	context->grid = grid;
	return validate_context_grid(context);
}

t_ctx *process_file(int fd)
{
	t_ctx *context;

	context = NULL;
	context = malloc(sizeof(t_ctx));
	if (!context)
		return NULL;
	init_context_data(context);
	if (!process_header(fd, context))
		return NULL;
	if (!process_grid(fd, context))
		return NULL;
	return context;
}

int process_args(int argc, char **argv)
{
	int i;
	int fd;
	t_ctx *context;

	if (argc < 2)
		return 0;

	i = 1;
	while (i < argc)
	{
		fd = open(argv[i++], O_RDONLY);
		if (fd == -1)
			return 0;
		context = process_file(fd);
		if (!context)
			return 0;
		printf("OK on va passer à l'algo !\n");
		printf("context->width: %d\n", context->width);
		printf("context->height: %d\n", context->height);
		printf("context->empty_c: %c\n", context->empty_c);
		printf("context->blocked_c: %c\n", context->blocked_c);
		printf("context->full_c: %c\n", context->full_c);
	}
	return 1;
}
