/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laidet_r <laidet_r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 03:09:17 by laidet_r          #+#    #+#             */
/*   Updated: 2018/10/19 22:05:39 by laidet_r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
#define BSQ_H
typedef struct s_ctx
{
	char	  **grid;
	int		  height;
	int		  width;
	char	  empty_c;
	char	  blocked_c;
	char	  full_c;
} t_ctx;
void init_context_data(t_ctx *context);
int validate_context_data(t_ctx *context);
#endif
