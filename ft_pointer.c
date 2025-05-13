/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalguer <asalguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:13:19 by asalguer          #+#    #+#             */
/*   Updated: 2024/11/29 16:48:21 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long long p, char *base, int flag)
{
	unsigned long long	nb;
	int					counter;

	counter = 0;
	if (!p)
	{
		counter += ft_putstr("(nil)");
		return (counter);
	}
	nb = p;
	if (flag)
		counter += ft_putstr("0x");
	if (nb >= 16)
		counter += ft_pointer((nb / 16), base, 0);
	counter += write(1, &base[nb % 16], 1);
	return (counter);
}
