/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcenci <mcenci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 11:39:32 by mcenci            #+#    #+#             */
/*   Updated: 2023/04/24 11:25:26 by mcenci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsint(unsigned int c)
{
	int	x;

	x = 0;
	if (c > 9)
		x += ft_unsint(c / 10);
	x += ft_putchar(c % 10 + 48);
	return (x);
}
