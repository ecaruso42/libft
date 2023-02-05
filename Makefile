# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/19 18:50:23 by ecaruso           #+#    #+#              #
#    Updated: 2023/02/05 15:58:21 by ecaruso          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = \
	./ft_memset.c	\
	./ft_bzero.c	\
	./ft_memcpy.c	\
	./ft_memmove.c	\
	./ft_strlen.c	\
	./ft_strlcpy.c	\
	./ft_strlcat.c	\
	./ft_strchr.c	\
	./ft_isdigit.c	\
	./ft_isalpha.c	\
	./ft_isalnum.c	\
	./ft_isascii.c	\
	./ft_isprint.c	\
	./ft_toupper.c	\
	./ft_tolower.c	\
	./ft_strrchr.c	\
	./ft_strncmp.c	\
	./ft_memchr.c	\
	./ft_memcmp.c	\
	./ft_strnstr.c	\
	./ft_atoi.c		\
	./ft_calloc.c	\
	./ft_strdup.c	\
	./ft_substr.c	\
	./ft_strjoin.c	\
	./ft_strtrim.c	\
	./ft_split.c	\
	./ft_itoa.c

OBJ = $(SRC:%.c=%.o)
FLAGS = -Wall -Wextra -Werror
GCC = gcc -c
all : $(NAME)

$(NAME) :
	$(GCC) $(FLAGS) -I ./ $(SRC)
	ar rcs $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all