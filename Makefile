# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/14 07:47:54 by athonda           #+#    #+#              #
#    Updated: 2024/05/17 21:06:37 by athonda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a


all : $(NAME)
$(NAME): ft_strlen.c ft_bzero.c ft_strncmp.c ft_strlcpy.c
		cc -Wall -Wextra -Werror -lbsd -c $^
		ar rc $(NAME) ft_strlen.o ft_bzero.o ft_strncmp.o ft_strlcpy.o
clean:
		rm -f libft.a ft_strlen.o ft_bzero.o ft_strncmp.o ft_strlcpy.o

.PHONY: clean
