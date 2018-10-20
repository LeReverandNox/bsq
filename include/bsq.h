/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laidet_r <laidet_r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 03:09:17 by laidet_r          #+#    #+#             */
/*   Updated: 2018/10/20 03:07:37 by laidet_r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
#define BSQ_H
typedef struct s_ctx
{
	char	 **grid;
	int      **aux_grid;
	int		 height;
	int		 width;
	char	 empty_c;
	char	 blocked_c;
	char	 full_c;
} t_ctx;
int solve_bsq(t_ctx *context);
void build_aux_grid(t_ctx *context);
void fill_aux_grid(t_ctx *context);
void compute_solution(t_ctx *context, int *max_index, int *max_i, int *max_j);
void reveal_solution(t_ctx *context, int max_index, int max_i, int max_j);
#endif
