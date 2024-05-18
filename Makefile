# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/14 07:47:54 by athonda           #+#    #+#              #
#    Updated: 2024/05/18 15:57:30 by athonda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_strlen.c ft_bzero.c ft_strncmp.c

OBJS	=	$(patsubst %.c,%.o,$(SRCS))

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)

$(OBJS): $(SRCS)
		cc -Wall -Wextra -Werror -c $(SRCS)
clean:
		rm -f $(OBJS)

.PHONY: clean
