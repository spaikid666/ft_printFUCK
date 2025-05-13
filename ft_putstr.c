/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalguer <asalguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:07:18 by asalguer          #+#    #+#             */
/*   Updated: 2024/11/29 16:47:04 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *str)
{
	int	counter;

	counter = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (*str)
	{
		counter += ft_putchar(*str);
		str++;
	}
	return (counter);
}
