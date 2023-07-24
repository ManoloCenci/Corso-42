/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcenci <mcenci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:50:25 by mcenci            #+#    #+#             */
/*   Updated: 2023/07/20 19:50:26 by mcenci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned long n, char *format)
{
	int	i;

	i = 0;
	if (n >= 16)
		i += ft_printhex(n / 16, format);
	i += ft_printchar(format[n % 16]);
	return (i);
}
