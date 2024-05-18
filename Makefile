# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/14 07:47:54 by athonda           #+#    #+#              #
#    Updated: 2024/05/18 22:41:01 by athonda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_strlen.c ft_bzero.c ft_strncmp.c ft_strlcpy.c \
			ft_atoi.c ft_isdigit.c ft_calloc.c

OBJS	=	$(patsubst %.c,%.o,$(SRCS))

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)

$(OBJS): $(SRCS)
		cc -Wall -Wextra -Werror -c $(SRCS)
clean:
		rm -f $(OBJS)

.PHONY: clean
