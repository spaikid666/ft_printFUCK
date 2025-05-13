# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asalguer <asalguer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/29 16:44:12 by asalguer          #+#    #+#              #
#    Updated: 2024/11/29 16:44:14 by asalguer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAG = -Wall -Wextra -Werror

CFILES = ft_hexa.c ft_pointer.c ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c\
		ft_putunbr.c ft_strlen.c

OBJS = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	cc $(FLAG) -c $< -o $@

clean:
	rm -f $(OBJS)
		
fclean: clean
	rm -f $(NAME)
		
re: fclean all

.PHONY: all clean fclean re