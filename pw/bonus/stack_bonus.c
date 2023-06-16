/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:51:09 by aamhal            #+#    #+#             */
/*   Updated: 2023/06/05 12:53:54 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_list	*fill_stack(int *nbr, char **p)
{
	t_list	*new;
	t_list	*a;
	int		i;

	a = NULL;
	i = 0;
	while (p[i])
	{
		new = ft_lstnew(nbr[i]);
		ft_lstadd_back(&a, new);
		i++;
	}
	return (a);
}

void	nbr_position(t_list **s)
{
	t_list	*p;
	int		counter;

	p = *s;
	counter = 1;
	while (p != NULL)
	{
		p->pos = counter;
		counter++;
		p = p->next;
	}
}

void	find_index(t_list **s)
{
	t_list	*i;
	t_list	*j;
	int		count;

	i = (*s);
	while (i != NULL)
	{
		j = (*s);
		count = 0;
		while (j != NULL)
		{
			if (i->nbr > j->nbr)
				count++;
			i->index = count;
			j = j->next;
		}
		i = i->next;
	}
}

int	if_nbr_sort(t_list **s)
{
	t_list	*i;
	t_list	*j;

	if ((*s))
	{
		i = (*s);
		j = (*s)->next;
		while (j != NULL)
		{
			if (i->index > j->index)
				return (-1);
			j = j->next;
			i = i->next;
		}
	}
	return (0);
}
