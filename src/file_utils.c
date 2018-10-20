/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laidet_r <laidet_r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 14:09:35 by laidet_r          #+#    #+#             */
/*   Updated: 2018/10/20 04:05:41 by laidet_r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "file_utils.h"

char *read_line(int fd)
{
	char *line;
	int i;
	int ret;

	line = NULL;
	line = malloc(sizeof(char) * 200);
	if (!line)
		return NULL;
	i = 0;
	ret = read(fd, line + i, 1);
	if (!ret)
		return NULL;
	while (ret > 0 && *(line + i) != '\n')
	{
		i += 1;
		ret = read(fd, (line + i), 1);
	}
	if (line[i] != '\n')
		return "";
	line[i] = '\0';
	return line;
}
