CC = cc 

CFLAGS = -Wall -Wextra -Werror -Iinc

NAME = push_swap

LIBFT = libft/src

SRC = src/push_swap.c src/push_swap_utils.c

CMD = src/comands/push.c src/comands/reverse.c src/comands/rotate.c src/comands/swap.c 

OPE = src/operation/sort_three.c src/operation/sort_five.c

OBJ = $(SRC:.c=.o) $(CMD:.c=.o) $(OPE:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@clear
	@make -s -C $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJ) -L$(LIBFT) -lft -o $(NAME)
	@echo -n "  Compiling"
	@bash ./loading.sh
	@clear
	@echo "\033[32m ✓ \033[0m Compilation successful!"

.c.o: 
	@$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

clean: 
	@make clean -s -C $(LIBFT)
	@rm -f $(OBJ)

fclean: clean
	@clear
	@echo -n "  Cleaning"
	@bash ./loading.sh
	@make clean -s -C $(LIBFT)
	@rm -f $(NAME)
	@echo "\033[32m ✓ \033[0m Clean complete!"
re: fclean all

.PHONY:	all clean fclean