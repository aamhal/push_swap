NAME = push_swap
CC = cc
FLAGS =  -Wall -Wextra -Werror
LIBFT_A = libft/libft.a
PRINTF_A = libftprintf/libftprintf.a
LIBFT = libft/
PRINTF = libftprintf/

SRC = SRC/main.c SRC/push_swap_pars1.c SRC/push_swap_pars2.c SRC/stack.c SRC/push_swap_utils.c SRC/operation.c SRC/stack_operations.c SRC/sort_3.c SRC/sort_4_5.c SRC/sorting.c
		
OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c SRC/push_swap.h libft/libft.h
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	@make -s -C $(LIBFT) 
	@make -s -C $(PRINTF) 
	$(CC) $(FLAGS) $(OBJ) $(LIBFT_A) $(PRINTF_A) -o $(NAME)

clean :
	@rm -rf libft/*.o
	@rm -rf libftprintf/*.o
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(LIBFT_A)
	@rm -rf $(PRINTF_A)
	@rm -rf $(NAME)

re : fclean all
