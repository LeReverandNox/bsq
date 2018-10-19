/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laidet_r <laidet_r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 17:25:25 by laidet_r          #+#    #+#             */
/*   Updated: 2018/10/19 21:48:37 by laidet_r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_UTILS_H
#define STRING_UTILS_H
char get_n_last_char(char *str, int len, int n);
char *remove_line_digits(char *str, int len);
int count_digits(char *str, int len);
#endif
