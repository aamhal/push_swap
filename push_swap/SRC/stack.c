/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:51:09 by aamhal            #+#    #+#             */
/*   Updated: 2023/06/04 15:02:29 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *fill_stack(int *nbr, char **p)
{
	t_list *new;
	t_list *a;
	int i;

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

void nbr_position(t_list **s)
{
	t_list *p;

	p = *s;
	int counter = 1;
	while (p != NULL)
	{
		p->pos = counter;
		counter++;
		p = p->next;
	}
}

void find_index(t_list **s)
{
	t_list *i;
	t_list *j;
	int 	count;

	i = (*s);
	while (i != NULL)
	{
		j =(*s);
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

void if_nbr_sort(t_list **s)
{
	t_list *i;
	t_list *j;

	i = (*s);
	j = (*s)->next;
	while (j != NULL)
	{
		if (i->index > j->index)
			return ;
		j = j->next;
	}
	print_nodes(*s);
	exit(0);
}
