/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laidet_r <laidet_r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 17:25:13 by laidet_r          #+#    #+#             */
/*   Updated: 2018/10/19 21:48:19 by laidet_r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string_utils.h"
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char get_n_last_char(char *str, int len, int n)
{
	if (n < len)
		return str[len - 1- n];
	return 0;
}

int count_digits(char *str, int len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < len)
	{
		if (!ft_char_is_num(str[i++]))
			j += 1;
	}
	return j;
}

char *remove_line_digits(char *str, int len)
{
	int i;
	int j;
	char *str2;

	j = count_digits(str, len);
	str2 = NULL;
	str2 = malloc(sizeof(char) * j + 1);
	if (!str2)
		return "";
	i = 0;
	j = 0;
	while (i < len)
	{
		if (!ft_char_is_num(str[i]))
		{
			str2[j] = str[i];
			j += 1;
		}
		i += 1;
	}
	return str2;
}
