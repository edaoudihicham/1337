NAME = my_program

all: $(NAME)

$(NAME): main.o helper.o
	gcc -o $(NAME) main.o helper.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
