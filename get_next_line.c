/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:49:24 by ngennaro          #+#    #+#             */
/*   Updated: 2022/12/13 12:45:51 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*buffer_parse(char *buffer, int index)
{
	char	*next;
	int		i;

	i = 0;
	next = malloc(sizeof(char) * (index + 1));
	if (!next)
		return (NULL);
	while (i <= index)
	{
		next[i] = buffer[i];
		i++;
	}
	return (next); //free missing
}

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	int			check;
	int			index;
	char		*line;

	check = 1;
	while (check != 0)
	{
		if (is_end_line(buffer, &index))
			return (join(line, buffer_parse(buffer, index)));
		else
			line = join(line, buffer);
		check = read(fd, buffer, BUFFER_SIZE);
		if (check == -1)
			return (NULL);
	}
	return (line);
}
