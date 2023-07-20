/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcenci <mcenci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:46:52 by mcenci            #+#    #+#             */
/*   Updated: 2023/07/20 19:46:54 by mcenci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	t;
	char	*news;
	int		i;

	i = 0;
	news = (char *)s;
	t = c;
	while (news[i] != t)
	{
		if (news[i] == '\0')
			return (0);
		i++;
	}
	return ((char *)news + i);
}
