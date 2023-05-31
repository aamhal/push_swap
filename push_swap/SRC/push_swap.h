/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:12:20 by aamhal            #+#    #+#             */
/*   Updated: 2023/05/31 08:32:45 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "../libft/libft.h"
# include "../libftprintf/ft_printf.h"

typedef struct s_list
{
	int content;
	int index;
	struct s_list *next;
} t_list;

char	*ft_join_param(int ac, char **p);
int		ft_check_is_valid(char **p);
int		ft_check_char(char *p);
int		ft_check_duplicat(char **p);
int		check_char(char *p, char c);
int check_signe(char **p);
char **parsing(int ac,char **av);
int *char_int(char **p, int ac);
void ft_error(void);

// liked list function
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);

#endif