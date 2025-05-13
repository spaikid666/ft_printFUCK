/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalguer <asalguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:12:09 by asalguer          #+#    #+#             */
/*   Updated: 2024/11/29 16:47:04 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putunbr(unsigned int n)
{
	int	counter;

	counter = 0;
	if (n >= 10)
	{
		counter = ft_putnbr(n / 10);
	}
	counter += ft_putchar((n % 10) + '0');
	return (counter);
}
