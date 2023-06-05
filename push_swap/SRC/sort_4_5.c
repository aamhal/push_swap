/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 13:08:26 by aamhal            #+#    #+#             */
/*   Updated: 2023/06/05 14:51:37 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_pos(t_list **s, int x)
{
	t_list	*p;
	int		i;

	i = 1;
	p = (*s);
	while (p != NULL)
	{
		if (p->index == x)
			break ;
		i++;
		p = p->next;
	}
	return (i);
}

void	push_nbrs_5(t_list **a, t_list **b)
{
	static int	i;
	int			pos;

	pos = find_min_pos(a, i);
	if (pos <= ft_lstsize(*a) / 2 + 1)
	{
		while ((*a)->index != i)
			r(a, "sa\n");
		p(a, b, "pb\n");
	}
	else
	{
		while ((*a)->index != i)
			rr(a, "rra\n");
		p(a, b, "pb\n");
	}
	i++;
}

void	push_nbrs(t_list **a, t_list **b)
{
	static int	i;
	int			pos;

	pos = find_min_pos(a, i);
	if (pos <= ft_lstsize(*a) / 2)
	{
		while ((*a)->index != i)
			r(a, "ra\n");
		p(a, b, "pb\n");
	}
	else if (pos > ft_lstsize(*a) / 2)
	{
		while ((*a)->index != i)
			rr(a, "rra\n");
		p(a, b, "pb\n");
	}
	i++;
}

void	sort_5_nbr(t_list **a, t_list **b)
{
	push_nbrs_5(a, b);
	push_nbrs_5(a, b);
	find_index(a);
	sort_3_nbr(a);
	p(b, a, "pa\n");
	p(b, a, "pa\n");
}


void	sort_4_nbr(t_list **a, t_list **b)
{
	push_nbrs(a, b);
	find_index(a);
	sort_3_nbr(a);
	p(b, a, "pa\n");
}
