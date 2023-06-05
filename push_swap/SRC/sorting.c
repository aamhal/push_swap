/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 11:46:35 by aamhal            #+#    #+#             */
/*   Updated: 2023/06/05 14:05:23 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max_index(t_list **s)
{
	t_list	*p;
	int		i;

	p = (*s);
	i = (*s)->index;
	while (p != NULL)
	{
		if (i < p->index)
			i = p->index;
		p = p->next;
	}
	return (i);
}

int	find_max_pos(t_list **s)
{
	t_list	*p;
	int		i;
	int		x;

	x = find_max_index(s);
	i = 1;
	p = *s;
	while (p != NULL)
	{
		if (p->index == x)
			break ;
		i++;
		p = p->next;
	}
	return (i);
}

void	fill_stack_b(t_list **a, t_list **b)
{
	int	i;
	int	j;

	if (ft_lstsize(*a) > 100)
		j = 42;
	else
		j = 15;
	i = 0;
	while (*a != NULL)
	{
		if ((*a)->index <= i)
		{
			p(a, b, "pb\n");
			i++;
		}
		else if ((*a)->index <= (i + j))
		{
			p(a, b, "pb\n");
			r(b, "rb\n");
			i++;
		}
		else
			r(a, "ra\n");
	}
}

void	fill_stack_a(t_list **a, t_list **b)
{
	int	pos;
	int	i;

	while (*b)
	{
		i = find_max_index(b);
		pos = find_max_pos(b);
		if (pos <= ft_lstsize(*b) / 2)
			while (i != (*b)->index)
				r(b, "rb\n");
		else
			while (i != (*b)->index)
				rr(b, "rrb\n");
		p(b, a, "pa\n");
	}
}
