/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_validation_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laidet_r <laidet_r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 03:15:38 by laidet_r          #+#    #+#             */
/*   Updated: 2018/10/20 03:18:15 by laidet_r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grid_validation_utils.h"
#include "libft.h"

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
