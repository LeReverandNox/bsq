/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laidet_r <laidet_r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 13:49:51 by laidet_r          #+#    #+#             */
/*   Updated: 2018/10/19 18:02:17 by laidet_r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
void init_context(t_ctx *context)
{
	context->width = 0;
	context->height = 0;
	context->full_c = 0;
	context->empty_c = 0;
	context->blocked_c = 0;
}
