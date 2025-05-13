/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalguer <asalguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:10:31 by asalguer          #+#    #+#             */
/*   Updated: 2024/11/29 17:20:04 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	formatter(char const *format, int *position, int *i, va_list ap)
{
	if (format[*i] == 'c')
		*position += ft_putchar(va_arg(ap, int));
	else if (format[*i] == 's')
		*position += ft_putstr(va_arg(ap, char *));
	else if (format[*i] == 'i' || format[*i] == 'd')
		*position += ft_putnbr(va_arg(ap, int));
	else if (format[*i] == 'u')
		*position += ft_putunbr(va_arg(ap, unsigned int));
	else if (format[*i] == 'p')
		*position += ft_pointer(va_arg(ap, unsigned long long),
				"0123456789abcdef", 1);
	else if (format[*i] == 'x')
		*position += ft_hexa(va_arg(ap, unsigned int), "0123456789abcdef");
	else if (format[*i] == 'X')
		*position += ft_hexa(va_arg(ap, unsigned int), "0123456789ABCDEF");
	else if (format[*i] == '%')
		*position += ft_putchar('%');
	return (*position);
}

int	ft_printf(char const *format, ...)
{
	va_list	ap;
	int		position;
	int		i;

	va_start(ap, format);
	position = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			position = formatter(format, &position, &i, ap);
		}
		else
			position += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (position);
}
/*
int	main(void)
{
	int	x;

	// Test %c (single character)
	ft_printf("Test %%c: %c %c %c\n", 'A', 'B', 'C');
	printf("Expected: %c %c %c\n\n", 'A', 'B', 'C');
	// Test %s (string)
	ft_printf("Test %%s: %s %s\n", "Hello", "World");
	printf("Expected: %s %s\n\n", "Hello", "World");
	// Test %i and %d (integer)
	ft_printf("Test %%i %%d: %i %d\n", 42, -42);
	printf("Expected: %i %d\n\n", 42, -42);
	// Test %u (unsigned integer)
	ft_printf("Test %%u: %u %u\n", 12345, 4294967295U);
	printf("Expected: %u %u\n\n", 12345, 4294967295U);
	// Test %p (pointer address)
	x = 42;
	ft_printf("Test %%p: %p\n", &x);
	printf("Expected: %p\n\n", &x);
	// Test %x (hexadecimal lowercase)
	ft_printf("Test %%x: %x %x\n", 255, 4096);
	printf("Expected: %x %x\n\n", 255, 4096);
	// Test %X (hexadecimal uppercase)
	ft_printf("Test %%X: %X %X\n", 255, 4096);
	printf("Expected: %X %X\n\n", 255, 4096);
	// Test %% (percentage)
	ft_printf("Test %%%%: %% %% %%\n");
	printf("Expected: %% %% %%\n\n");
	return (0);
}
*/