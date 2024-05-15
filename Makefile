# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/14 07:47:54 by athonda           #+#    #+#              #
#    Updated: 2024/05/15 09:38:06 by athonda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

libft.a: ft_strlen.c
		gcc -Wall -Wextra -Werror -o libft.a ft_strlen.c

clean:
		rm -f libft.a
