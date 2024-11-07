# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agraille <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 08:03:50 by agraille          #+#    #+#              #
#    Updated: 2024/11/07 08:34:08 by agraille         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS=-Wall -Wextra -Werror
SRC = ./ft_isalpha.c\
	./ft_isdigit.c\
	./ft_isalnum.c\
	./ft_isascii.c\
	./ft_isprint.c\
	./ft_strlen.c\
	./ft_memset.c\
	./ft_bzero.c\
	./ft_memcpy.c\
	./ft_memmove.c\
	./ft_strlcpy.c\
	./ft_strlcat.c\
	./ft_toupper.c\
	./ft_tolower.c\
	./ft_strchr.c\
	./ft_strrchr.c\
	./ft_strncmp.c\
	./ft_memchr.c\
	./ft_memcmp.c\
	./ft_strnstr.c\
	./ft_atoi.c\
	./ft_calloc.c\
	./ft_strdup.c\
	./ft_substr.c\
	./ft_strjoin.c


OBJ = $(SRC:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -I . -c $< -o $@

clean :
	rm -f $(OBJ)

fclean :
	rm -f $(NAME) $(OBJ)

re : fclean all

.PHONY : re fclean clean
