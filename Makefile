# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uxmancis <uxmancis@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 20:29:37 by uxmancis          #+#    #+#              #
#    Updated: 2022/11/05 22:43:05 by uxmancis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
	  ft_toupper.c ft_tolower.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
	  ft_strncmp.c  ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_memchr.c	 ft_memcmp.c ft_strdup.c ft_strjoin.c ft_substr.c ft_atoi.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_calloc.c \
	ft_split.c ft_strmapi.c ft_striteri.c ft_strnstr.c ft_strtrim.c ft_itoa.c

OBJS = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra

AR = ar rcs
INCLUDE = libft.h

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

clean:
	rm -f $(OBJS)

fclean: clean 
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 
