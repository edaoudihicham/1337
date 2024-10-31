# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/31 16:42:51 by hdaoudi           #+#    #+#              #
#    Updated: 2024/10/31 20:21:51 by hdaoudi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC= cc 
CFLAGS= -Wall -Wextra -Werror
NAME = libft.a

SRC = ft_isalnum.c ft_isprint.c ft_memmove.c ft_strlcat.c ft_strnstr.c \
	ft_atoi.c    ft_isalpha.c ft_memchr.c  ft_memset.c  ft_strlcpy.c ft_strrchr.c \
	ft_bzero.c   ft_isascii.c ft_memcmp.c  ft_strchr.c  ft_strlen.c  ft_tolower.c \
	ft_calloc.c  ft_isdigit.c ft_memcpy.c  ft_strdup.c  ft_strncmp.c ft_toupper.c \
	ft_substr.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@ -I.

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)
	
clean:
	-rm *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
