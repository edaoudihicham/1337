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
