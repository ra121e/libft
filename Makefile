# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/14 07:47:54 by athonda           #+#    #+#              #
#    Updated: 2024/05/14 07:48:00 by athonda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

libft.a:main.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_strlen.o ft_tolower.o ft_toupper.o
		cc -o libft.a main.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_strlen.o ft_tolower.o ft_toupper.o