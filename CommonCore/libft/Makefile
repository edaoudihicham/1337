# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/31 16:42:51 by hdaoudi           #+#    #+#              #
#    Updated: 2024/10/31 16:42:52 by hdaoudi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC= cc 
CFLAGS= -Wall -Wextra -Werror
NAME = libft.a

SRC = .c use wildcard
OBJ = .o

all: $(NAME)

$(NAME): main.o helper.o
	gcc -c $(NAME) main.o helper.o -I
	ar -rc
	ranlib
clean:
	-rm *.o

fclean: clean
	rm $(NAME)

re: fclean all
