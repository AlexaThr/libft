FLAGS = -Wall -Wextra -Werror

NAME = libft.a

FILE = *.c

HEADERS = libft.h

all: $(NAME)

$(NAME): 
	gcc -c $(FILE) $(FLAGS) && ar rc $(NAME) *.o

clean:
	rm -rf $(NAME)

fclean: clean
	rm *.o

re: fclean all
