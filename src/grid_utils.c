/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laidet_r <laidet_r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 14:03:52 by laidet_r          #+#    #+#             */
/*   Updated: 2018/10/20 00:51:25 by laidet_r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "bsq.h"
#include "grid_utils.h"

int get_max_grid_width(t_ctx *context)
{
	int i;
	int max_len;
	int len;

	max_len = 0;
	i = 0;
	while (i < context->height)
	{
		len = ft_strlen(context->grid[i++]);
		if (len > max_len)
			max_len = len;
	}
	return max_len;
}

int validate_grid_width(t_ctx *context)
{
	int i;
	int max_len;
	int len;

	max_len = get_max_grid_width(context);
	context->width = max_len;
	i = 0;
	while (i < context->height)
	{
		len = ft_strlen(context->grid[i++]);
		if (len != max_len)
			return 0;
	}
	return 1;
}

int validate_grid_content(t_ctx *context)
{
	int i;
	int j;

	i = 0;
	while (i < context->height)
	{
		j = 0;
		while (context->grid[i][j] != '\0')
		{
			if (context->grid[i][j] != context->empty_c &&\
				context->grid[i][j] != context->blocked_c)
				return 0;
			j += 1;
		}
		i += 1;
	}
	return 1;
}

int validate_context_grid(t_ctx *context)
{
	return (validate_grid_width(context) &&\
			validate_grid_content(context)
		);
}

int init_aux_grid(t_ctx *context)
{
	int **aux_grid;
	int *line;
	int i;
	int j;


	aux_grid = NULL;
	aux_grid = malloc(sizeof(int *) * context->height);
	if (!aux_grid)
		return 0;
	i = 0;
	while (i < context->height)
	{
		line = NULL;
		line = malloc(sizeof(int) * context->width);
		if (!line)
			return 0;
		j = 0;
		while (j < context->width)
			line[j++] = 0;
		aux_grid[i++] = line;
	}
	context->aux_grid = aux_grid;
	return 1;
}

void print_aux_grid(t_ctx *context)
{
	int i;
	int j;

	i = 0;
	while (i < context->height)
	{
		j = 0;
		while (j < context->width)
			ft_putnbr(context->aux_grid[i][j++]);
		i += 1;
		ft_putchar('\n');
	}
}

void print_grid(t_ctx *context)
{
	int i;
	int j;

	i = 0;
	while (i < context->height)
	{
		j = 0;
		while (j < context->width)
			ft_putchar(context->grid[i][j++]);
		i += 1;
		ft_putchar('\n');
	}
}

int min(int a, int b, int c)
{
	int m;

	m = a;
	if (m > b)
		m = b;
	if (m > c)
		m = c;
	return m;
}
