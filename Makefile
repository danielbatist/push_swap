CC = cc 

CFLAGS = -Wall -Wextra -Werror -Iinc

NAME = push_swap

LIBFT = libft/src

SRC = src/push_swap.c src/push_swap_utils.c src/main.c

OPE = src/operation/push.c src/operation/reverse.c src/operation/rotate.c src/operation/swap.c 

OBJ = $(SRC:.c=.o) $(OPE:.c=.o)

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