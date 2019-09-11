FLAGS=-Wall	-Wextra	-Werror

NAME=libft.a

SRC=*.c

OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	clean
	rm -f $(NAME)

re:
	fclean all