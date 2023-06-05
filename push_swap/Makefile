NAME = push_swap
NAMEB = checker
CC = cc
FLAGS =  -Wall -Wextra -Werror
LIBFT_A = libft/libft.a
LIBFT = libft/

SRC = SRC/main.c SRC/push_swap_pars1.c SRC/push_swap_pars2.c SRC/stack.c SRC/push_swap_utils.c SRC/operation.c SRC/stack_operations.c SRC/sort_3.c SRC/sort_4_5.c SRC/sorting.c SRC/free.c

BONUS = bonus/bonus_pars1.c bonus/bonus_pars2.c bonus/main.c bonus/operation_bonus.c bonus/stack_bonus.c bonus/stack_operations_bonus.c bonus/bonus_utils.c bonus/free_bonus.c bonus/bonus_utils2.c
		
OBJ = $(SRC:.c=.o)
BOBJ = $(BONUS:.c=.o)

all : $(NAME)

%.o : %.c SRC/push_swap.h bonus/push_swap_bonus.h libft/libft.h
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	@make -s -C $(LIBFT) 
	$(CC) $(FLAGS) $(OBJ) $(LIBFT_A) -o $(NAME)

bonus : $(BOBJ)
	@make -s -C $(LIBFT) 
	$(CC) $(FLAGS) $(BOBJ) $(LIBFT_A) -o $(NAMEB)

clean :
	@rm -rf libft/*.o
	@rm -rf libftprintf/*.o
	@rm -rf $(OBJ)
	@rm -rf $(BOBJ)

fclean : clean
	@rm -rf $(LIBFT_A)
	@rm -rf $(NAME)
	@rm -rf $(NAMEB)

re : fclean all
