/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_net_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:49:24 by ngennaro          #+#    #+#             */
/*   Updated: 2022/12/12 17:13:29 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*get_next_line(int fd, int buffer)
{
	static char	buffer[BUFFER_SIZE + 1];
	int			check;
	int			index;
	char		*line;

	check = 1;
	while (check != 0)
	{
		if (is_end_line(buffer, &index))
			return(ft_strjoin(line, /*ft_debut_phrase*/));
		else if (buffer)
			line = ft_strjoin(line, buffer);

		check = read(fd, buffer, BUFFER_SIZE);
		if (check = -1)
			return (NULL);
	}
	return (line);
}
