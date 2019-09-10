FLAGS = -Wall -Wextra -Werror

NAME = libft.a

FILE = *.c

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(FILE)
	ar rc $(NAME) *.o

clean:
	rm -rf $(NAME)

fclean: clean
	rm *.o

re: fclean all
