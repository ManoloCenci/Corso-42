/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcenci <mcenci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:50:44 by mcenci            #+#    #+#             */
/*   Updated: 2023/07/20 19:50:46 by mcenci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpointer(unsigned long n, char *format)
{
	int	res;

	res = 0;
	res += ft_printchar('0');
	res += ft_printchar('x');
	res += ft_printhex(n, format);
	return (res);
}
