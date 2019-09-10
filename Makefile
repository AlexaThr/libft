FLAGS=-Wall	-Wextra	-Werror

NAME=libft.a

INC=libft.h

FILE=*.c

OBJ=$(FILE:.c=.o)

all: $(NAME)

$(NAME):
	$(INC)
	gcc $(FLAGS) -c $(FILE)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:
	clean
	rm -rf $(NAME)

re:
	fclean all