/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_processer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laidet_r <laidet_r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 13:50:46 by laidet_r          #+#    #+#             */
/*   Updated: 2018/10/19 18:12:07 by laidet_r         ###   ########.fr       */
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

int process_header(int fd, t_ctx *context)
{
	printf("context->height: %d\n", context->height);
	printf("context->width: %d\n", context->width);
	printf("context->empty_c: %c\n", context->empty_c);
	printf("context->blocked_c: %c\n", context->blocked_c);
	printf("context->full_c: %c\n", context->full_c);
	char *line;
	int len;

	line = read_line(fd);
	if (!line)
		return 0;
	len = ft_strlen(line);
	printf("line len: %d\n", len);
	/* context->height = ft_atoi(line); */
	/* context->empty_c = get_n_last_char(line, len, 2); */
	/* context->empty_c = 'x'; */
	/* context->blocked_c = get_n_last_char(line, len, 1); */
	/* context->blocked_c = 'y'; */
	/* context->full_c = get_n_last_char(line, len, 0); */
	/* context->full_c = 'z'; */
	/* line[0] = 'A'; */
	/* line[1] = 'B'; */
	printf("line: %s\n", line);
	printf("context->height: %d\n", context->height);
	printf("context->width: %d\n", context->width);
	printf("context->empty_c: %c\n", context->empty_c);
	printf("context->blocked_c: %c\n", context->blocked_c);
	printf("context->full_c: %c\n", context->full_c);

	return 1;
}

t_ctx *process_file(int fd)
{
	t_ctx *context;

	context = NULL;
	context = malloc(sizeof(t_ctx *));
	if (!context)
		return NULL;
	init_context(context);
	if (!process_header(fd, context))
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
		printf("On va open %s\n", argv[i]);
		fd = open(argv[i++], O_RDONLY);
		if (fd == -1)
			return 0;
		context = process_file(fd);
		if (!context)
			return 0;
	}
	return 1;
}
