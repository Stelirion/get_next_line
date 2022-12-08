/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_net_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:49:24 by ngennaro          #+#    #+#             */
/*   Updated: 2022/12/08 16:34:57 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*next_line(int fd, int buffer, char *stash)
{
	if (is_end_line(stash))
	{

	}
	read(fd, buffer, BUFFER_SIZE)
}

char *get_next_line(int fd)
{
	char		*buffer;
	static char	*stash;
	char		*line;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	line = next_line(fd, buffer, &stash);

	return (line);
}
