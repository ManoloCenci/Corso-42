/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcenci <mcenci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:49:22 by mcenci            #+#    #+#             */
/*   Updated: 2023/07/20 19:49:24 by mcenci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read(int fd, char *str)
{
	char	*ptr;
	int		i;

	ptr = (char *)malloc(BUFFER_SIZE + 1);
	if (!ptr)
		return (0);
	i = 1;
	while (!ft_search(str) && i != 0)
	{
		i = read(fd, ptr, BUFFER_SIZE);
		if (i == -1)
		{
			free(ptr);
			return (str);
		}
		ptr[i] = '\0';
		str = ft_strjoinn(str, ptr);
	}
	free(ptr);
	if (str[0] == '\0')
	{
		free(str);
		return (0);
	}
	return (str);
}

char	*get_next_line(int fd)
{
	char static	*ptr;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	ptr = ft_read(fd, ptr);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	line = ft_putline(ptr);
	ptr = ft_new(ptr);
	return (line);
}
