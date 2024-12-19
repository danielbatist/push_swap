CC = cc 

CFLAGS = -Wall -Wextra -Werror -I$(NAME)/headers

NAME = push_swap

LIBFT = libft/src

SRC = src/push_swap.c src/push_swap_utils.c src/main.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@clear
	@make -s -C $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJ) -L$(LIBFT) -lft -o $(NAME)
	@echo -n "🔄 Compiling"
	@sleep 1
	@echo -n "."
	@sleep 1
	@echo -n "."
	@sleep 1
	@echo -n "."
	@sleep 1
	@clear
	@echo "\033[32mCompilation successful!🎉\033[0m"

.c.o: 
	@$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

clean: 
	@make clean -s -C $(LIBFT)
	@rm -f $(OBJ)

fclean: clean
	@echo "🔄 Cleaning..."
	@bash ./loading.sh
	@make clean -s -C $(LIBFT)
	@rm -f $(NAME)
	@echo " \033[32m✔\033[0m Clean complete!"
re: fclean all

.PHONY:	all clean fclean