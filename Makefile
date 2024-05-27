# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/14 07:47:54 by athonda           #+#    #+#              #
#    Updated: 2024/05/27 15:56:38 by athonda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
			ft_isprint.c ft_tolower.c ft_toupper.c \
			ft_strlen.c \
			ft_bzero.c ft_memset.c ft_memcpy.c ft_memmove.c\
			ft_memchr.c ft_strchr.c ft_strrchr.c \
			ft_memcmp.c ft_strncmp.c ft_strnstr.c \
			ft_strlcpy.c ft_strlcat.c\
			ft_atoi.c \
			ft_calloc.c ft_strdup.c \
			ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
			ft_strmapi.c ft_striteri.c \
			ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c

SRCS_B	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c

OBJS	=	$(patsubst %.c,%.o,$(SRCS))

OBJS_B	=	$(patsubst %.c,%.o,$(SRCS_B))

CFLAGS	=	-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)

$(OBJS): $(SRCS)
		cc $(CFLAGS) -c $(SRCS)

bonus: $(NAME) $(OBJS_B)
		ar rc $(NAME) $(OBJS_B)

$(OBJS_B): $(SRCS_B)
		cc $(CFLAGS) -c $(SRCS_B)

clean:
		rm -f $(OBJS) $(OBJS_B)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
