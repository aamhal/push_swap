/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:12:20 by aamhal            #+#    #+#             */
/*   Updated: 2023/06/05 14:09:42 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "../libft/libft.h"

typedef struct s_list
{
	int				nbr;
	int				index;
	int				pos;
	struct s_list	*next;
}	t_list;

//parcing
char	*ft_join_param(int ac, char **p);
int		ft_check_is_valid(char **p);
int		ft_check_char(char *p);
int		ft_check_duplicat(char **p);
int		check_char(char *p, char c);
char	**parsing(int ac, char **av);
int		*char_int(char **p);
void	ft_error(void);
void	check_atoi(char *str);
void	check_arg(t_list **a, t_list **b, int i);

// liked list function
t_list	*ft_lstnew(int nbr);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	push(t_list **sa, t_list **sb);
int		ft_lstsize(t_list *lst);

//stack
t_list	*fill_stack(int *nbr, char **av);
void	nbr_position(t_list **s);
void	find_index(t_list **s);
int		find_min_pos(t_list **s, int x);
int		find_max_index(t_list **s);
int		find_max_pos(t_list **s);

//operations
void	swap(t_list **s);
void	rotation(t_list **s);
void	rev_rotation(t_list **s);
void	push(t_list **sa, t_list **sb);
void	sw(t_list **a, char *str);
void	r(t_list **a, char *str);
void	rr(t_list **a, char *str);
void	p(t_list **b, t_list **a, char *str);

//sort
void	if_nbr_sort(t_list **s);
void	sort_3_nbr(t_list **s);
void	sort_4_nbr(t_list **a, t_list **b);
void	sort_5_nbr(t_list **a, t_list **b);
void	push_nbrs_5(t_list **a, t_list **b);
void	push_nbrs(t_list **a, t_list **b);
void	fill_stack_b(t_list **a, t_list **b);
void	fill_stack_a(t_list **a, t_list **b);

//free
void	ft_free(char **p);
void	ft_free_ll(t_list **s);

#endif