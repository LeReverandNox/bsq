/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   context_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laidet_r <laidet_r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 03:01:36 by laidet_r          #+#    #+#             */
/*   Updated: 2018/10/20 03:06:42 by laidet_r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "context_utils.h"

void init_context_data(t_ctx *context)
{
	context->width = 0;
	context->height = 0;
	context->full_c = 0;
	context->empty_c = 0;
	context->blocked_c = 0;
}

int validate_context_data(t_ctx *context)
{
	return (
		context->height != 0 &&\
		context->full_c != 0 &&\
		context->empty_c != 0 &&\
		context->blocked_c != 0
		);
}
