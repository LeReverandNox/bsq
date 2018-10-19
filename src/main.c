/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laidet_r <laidet_r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 02:52:12 by laidet_r          #+#    #+#             */
/*   Updated: 2018/10/19 13:53:08 by laidet_r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "arg_processer.h"

int main(int argc, char **argv)
{

	if (!process_args(argc, argv))
	{
		ft_putstr("map error\n");
		return 1;
	}
	return 0;
}
