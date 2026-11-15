NAME = tictactoe

SRCS = main.c \
	str_cpy.c \
	tictactoe.c \
	print_game.c

CFLAGS = -Wall -Wextra -O2

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(CFLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all