/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalguer <asalguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:37:50 by asalguer          #+#    #+#             */
/*   Updated: 2024/11/29 17:19:16 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(unsigned int nb, char *base)
{
	long	size;
	long	num;
	int		count;

	count = 0;
	num = nb;
	size = ft_strlen(base);
	if (num < 0)
	{
		count = write(1, "-", 1);
		num = num * -1;
	}
	if (num >= size)
		count += ft_hexa(num / size, base);
	count += write(1, &base[num % size], 1);
	return (count);
}
