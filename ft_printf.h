/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalguer <asalguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:23:43 by asalguer          #+#    #+#             */
/*   Updated: 2024/11/29 17:35:20 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int				ft_printf(char const *format, ...);
int				ft_strlen(char *str);
int				ft_putchar(int c);
int				ft_putnbr(int n);
int				ft_putstr(const char *str);
unsigned int	ft_putunbr(unsigned int n);
int				ft_hexa(unsigned int nb, char *base);
int				ft_pointer(unsigned long long p, char *base, int flag);

#endif