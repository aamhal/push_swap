/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:12:20 by aamhal            #+#    #+#             */
/*   Updated: 2023/06/03 18:57:35 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "../libft/libft.h"
# include "../libftprintf/ft_printf.h"

typedef struct s_list
{
	int nbr;
	int index;
	int pos;
	struct s_list *next;
} t_list;

//parcing
char	*ft_join_param(int ac, char **p);
int		ft_check_is_valid(char **p);
int		ft_check_char(char *p);
int		ft_check_duplicat(char **p);
int		check_char(char *p, char c);
int 	check_signe(char **p);
char 	**parsing(int ac,char **av);
int 	*char_int(char **p, int ac);
void 	ft_error(void);
void 	check_atoi(char *str);

//stack
t_list	*fill_stack(int *nbr,int ac);
void	nbr_position(t_list **s);
void	find_index(t_list **s);

//sort
void	if_nbr_sort(t_list **s);
int 	find_min_index(t_list **s, int x);
void	sort_3_nbr(t_list **s);
void 	push_nbrs(t_list **a, t_list **b);
void 	sort_4_nbr(t_list **a, t_list **b);
void 	sort_5_nbr(t_list **a, t_list **b);
void 	push_nbrs2(t_list **a, t_list **b);

//operations
void swap(t_list **s);
void rotation(t_list **s);
void	rev_rotation(t_list **s);
void push(t_list **sa, t_list **sb);
void swap_a(t_list **a);
void rotat_a(t_list **a);
void rev_rotat_a(t_list **a);
void push_a(t_list **b, t_list **a);
void swap_b(t_list **b);
void rotat_b(t_list **b);
void rev_rotat_b(t_list **b);
void push_b(t_list **a, t_list **b);


// liked list function
t_list	*ft_lstnew(int nbr);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	push(t_list **sa, t_list **sb);
int	ft_lstsize(t_list *lst);

//help function
void    print_nodes(t_list *arg);
void    aff(t_list *stack_a, t_list *stack_b, int size);

#endif