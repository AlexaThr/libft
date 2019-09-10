FLAGS=-Wall	-Wextra	-Werror

NAME=libft.a

INC=libft.h

FILE=*.c

OBJ=$(FILE:.c=.o)

$(NAME):
	$(INC)
	gcc $(FLAGS) -c $(FILE)
	ar rc $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean:
	clean
	rm -rf $(NAME)

re:
	fclean all