/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_utils.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laidet_r <laidet_r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 14:03:56 by laidet_r          #+#    #+#             */
/*   Updated: 2018/10/19 22:25:11 by laidet_r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRID_UTILS_H
#define GRID_UTILS_H
int validate_context_grid(t_ctx *context);
int validate_grid_width(t_ctx *context);
int validate_grid_content(t_ctx *context);
int get_max_grid_width(t_ctx *context);
#endif
