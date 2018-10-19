/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laidet_r <laidet_r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 03:09:17 by laidet_r          #+#    #+#             */
/*   Updated: 2018/10/19 18:02:29 by laidet_r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
#define BSQ_H
typedef struct s_ctx
{
	int		**grid;
	int		  height;
	int		  width;
	char	  empty_c;
	char	  blocked_c;
	char	  full_c;
} t_ctx;
void init_context(t_ctx *context);
#endif
