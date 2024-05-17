# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/14 07:47:54 by athonda           #+#    #+#              #
#    Updated: 2024/05/17 10:48:44 by athonda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

libft.a: ft_strlen.c
		gcc -Wall -Wextra -Werror -c ft_strlen.c
		ar rc libft.a ft_strlen.o
clean:
		rm -f libft.a ft_strlen.o
