/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalguer <asalguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:06:46 by asalguer          #+#    #+#             */
/*   Updated: 2024/11/29 16:47:05 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	counter;

	counter = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		counter += ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		counter += ft_putnbr(n / 10);
	counter += ft_putchar((n % 10) + '0');
	return (counter);
}
