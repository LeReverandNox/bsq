/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_processer.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laidet_r <laidet_r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 13:52:44 by laidet_r          #+#    #+#             */
/*   Updated: 2018/10/20 00:48:19 by laidet_r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARG_PROCESSER_H
#define ARG_PROCESSER_H
#include "bsq.h"
int process_args(int argc, char **argv);
int process_header(int fd, t_ctx *context);
int process_grid(int fd, t_ctx *context);
t_ctx *process_file(int fd);
int process_args(int argc, char **argv);
#endif
