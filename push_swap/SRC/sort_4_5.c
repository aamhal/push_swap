/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 13:08:26 by aamhal            #+#    #+#             */
/*   Updated: 2023/06/03 18:58:52 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_min_index(t_list **s, int x)
{
	t_list	*p;
	int i;
	
	i = 1;
	p = (*s);
	while (p != NULL)
	{
		if (p->index == x)
			break;
		i++;
		p = p->next;
	}
	return (i);
}

void push_nbrs(t_list **a, t_list **b)
{
	static int i;

	int pos;
	pos = find_min_index(a,i);
	if (pos <= ft_lstsize(*a) / 2 + 1)
	{
		while ((*a)->index != i)
			rotat_a(a);		
		push_b(b,a);
	}
	else
	{
		while ((*a)->index != i)
			rev_rotat_a(a);
		push_b(b,a);
	}
	i++;
}
void push_nbrs2(t_list **a, t_list **b)
{
	static int i;

	int pos;
	pos = find_min_index(a,i);
	if (pos <= ft_lstsize(*a) / 2)
	{
		while ((*a)->index != i)
			rotat_a(a);		
		push_b(b,a);
	}
	else if (pos > ft_lstsize(*a) / 2)
	{
		while ((*a)->index != i)
			rev_rotat_a(a);
		push_b(b,a);
	}
	i++;
}

void sort_5_nbr(t_list **a, t_list **b)
{
	find_index(a);	
	push_nbrs(a,b);
	push_nbrs(a,b);
	find_index(a);	
	sort_3_nbr(a);
	push_a(b,a);
	push_a(b,a);
}

void sort_4_nbr(t_list **a, t_list **b)
{
	push_nbrs2(a,b);
	find_index(a);
	sort_3_nbr(a);
	push_a(b,a);
}