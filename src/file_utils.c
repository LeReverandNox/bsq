/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laidet_r <laidet_r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 14:09:35 by laidet_r          #+#    #+#             */
/*   Updated: 2018/10/19 19:28:11 by laidet_r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *read_line(int fd)
{
	char *line;
	int i;
	int ret;

	line = NULL;
	line = malloc(sizeof(char) * 100);
	if (!line)
		return NULL;
	i = 0;
	ret = read(fd, line + i, 1);
	while (ret != -1 && *(line + i) != '\n')
	{
		i += 1;
		ret = read(fd, (line + i), 1);
	}
	line[i] = '\0';
	return line;
}
