/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laidet_r <laidet_r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 14:03:52 by laidet_r          #+#    #+#             */
/*   Updated: 2018/10/20 03:24:24 by laidet_r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "grid_utils.h"

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
