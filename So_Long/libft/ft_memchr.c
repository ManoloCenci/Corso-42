/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcenci <mcenci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:45:58 by mcenci            #+#    #+#             */
/*   Updated: 2023/07/20 19:46:00 by mcenci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cpy;
	size_t			i;

	cpy = (unsigned char *)s;
	i = 0;
	while (n > i)
	{
		if (cpy[i] == (unsigned char)c)
			return (&cpy[i]);
		i++;
	}
	return (NULL);
}
