/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laidet_r <laidet_r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 17:25:13 by laidet_r          #+#    #+#             */
/*   Updated: 2018/10/20 00:45:49 by laidet_r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string_utils.h"
#include "libft.h"
#include <stdlib.h>

char get_n_last_char(char *str, int len, int n)
{
	if (n < len)
		return str[len - 1- n];
	return 0;
}

int count_firsts_digits(char *str, int len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < len)
	{
		if (ft_char_is_num(str[i++]))
			j += 1;
		else
			break;
	}
	return j;
}

char *remove_firsts_digits(char *str, int len)
{
	int i;
	int j;
	int nb_digits;
	char *str2;

	nb_digits = count_firsts_digits(str, len);
	str2 = NULL;
	str2 = malloc(sizeof(char) * (len - nb_digits) + 1);
	if (!str2)
		return "";
	i = nb_digits;
	j = 0;
	while (i < len)
	{
		str2[j++] = str[i++];
	}
	str2[j] = '\0';
	return str2;
}
