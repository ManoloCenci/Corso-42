/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcenci <mcenci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:50:55 by mcenci            #+#    #+#             */
/*   Updated: 2023/07/20 19:50:56 by mcenci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsigned(unsigned int nb)
{
	int	res;

	res = 0;
	if (nb > 9)
		res += ft_printnumb(nb / 10);
	res += ft_printchar(nb % 10 + 48);
	return (res);
}
