# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmusayev <nmusayev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/25 19:59:33 by nmusayev          #+#    #+#              #
#    Updated: 2025/02/28 12:19:09 by nmusayev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -I./include/
RM = rm -rf
NAME = libftprintf.a

SRCS = src/ft_printf.c src/ft_print_char.c src/ft_print_str.c src/ft_print_hex.c src/ft_print_nbr.c src/ft_print_ptr.c src/ft_print_unsigned.c 
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C libft
	cp libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) src/*.o
	$(MAKE) clean -C libft
	
fclean: clean
	$(RM) $(NAME)
	$(MAKE) fclean -C libft
re: fclean all

.PHONY: all clean fclean re

