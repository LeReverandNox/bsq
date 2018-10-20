/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_validation_utils.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laidet_r <laidet_r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 03:16:06 by laidet_r          #+#    #+#             */
/*   Updated: 2018/10/20 03:18:04 by laidet_r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRID_VALIDATION_UTILS_H
#define GRID_VALIDATION_UTILS_H
#include "bsq.h"
int validate_context_grid(t_ctx *context);
int validate_grid_width(t_ctx *context);
int validate_grid_content(t_ctx *context);
int get_max_grid_width(t_ctx *context);
#endif
