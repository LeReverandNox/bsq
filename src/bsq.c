/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laidet_r <laidet_r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 13:49:51 by laidet_r          #+#    #+#             */
/*   Updated: 2018/10/20 03:13:56 by laidet_r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "bsq.h"
#include "grid_utils.h"
#include "int_utils.h"

int solve_bsq(t_ctx *context)
{
	int max_index;
	int max_i;
	int max_j;

	if (!init_aux_grid(context))
		return 0;
    build_aux_grid(context);
	compute_solution(context, &max_index, &max_i, &max_j);
	reveal_solution(context, max_index, max_i, max_j);
	return 1;
}


void build_aux_grid(t_ctx *context)
{
	int i;
	int j;

	i = -1;
	while (++i < context->height)
		context->aux_grid[i][0] = \
			(context->grid[i][0] == context->empty_c) ? 1 : 0;
	j = -1;
	while(++j < context->width)
		context->aux_grid[0][j] = \
			(context->grid[0][j] == context->empty_c) ? 1 : 0;
	fill_aux_grid(context);
}

void fill_aux_grid(t_ctx *context)
{
	int i;
	int j;

	i = 0;
	while (++i < context->height)
	{
		j = 0;
		while (++j < context->width)
		{
			if (context->grid[i][j] == context->empty_c)
			{
				context->aux_grid[i][j] = min(context->aux_grid[i][j - 1],\
										context->aux_grid[i - 1][j], \
										context->aux_grid[i - 1][j - 1]) + 1;
			}
			else
				context->aux_grid[i][j] = 0;
		}
	}
}

void compute_solution(t_ctx *context, int *max_index, int *max_i, int *max_j)
{
	int i;
	int j;

	*max_index = context->aux_grid[0][0];
	*max_i = 0;
	*max_j = 0;
	i = -1;
	while (++i < context->height)
	{
		j = -1;
		while (++j < context->width)
		{
			if(*max_index < context->aux_grid[i][j])
			{
				*max_index = context->aux_grid[i][j];
				*max_i = i;
				*max_j = j;
			}
		}
	}
}

void reveal_solution(t_ctx *context, int max_index, int max_i, int max_j)
{
	int i;
	int j;

	i = max_i + 1;
	while (--i > max_i - max_index)
	{
		j = max_j + 1;
		while (--j > max_j - max_index)
		{
			context->grid[i][j] = context->full_c;
		}
	}
}
