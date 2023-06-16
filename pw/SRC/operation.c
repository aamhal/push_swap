/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:49:17 by aamhal            #+#    #+#             */
/*   Updated: 2023/06/04 10:31:44 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **s)
{
	t_list	*node1;	
	t_list	*node2;

	if (*s != NULL && (*s)->next != NULL)
	{	
		node1 = *s;
		node2 = (*s)->next;
		node1->next = node2->next;
		node2->next = node1;
		*s = node2;
	}
}

void	rotation(t_list **s)
{
	t_list	*tmp;
	t_list	*last;

	if (*s != NULL && (*s)->next != NULL)
	{
		tmp = *s;
		last = *s;
		while (last->next != NULL)
		last = last->next;
		last->next = tmp;
		*s = tmp->next;
		tmp->next = NULL;
	}	
}

void	rev_rotation(t_list **s)
{
	t_list	*tmp;
	t_list	*x;

	if (*s != NULL && (*s)->next != NULL)
	{
		tmp = *s;
		x = *s;
		while (tmp->next != NULL)
			tmp = tmp->next;
		while (x->next != tmp)
			x = x->next;
		x->next = NULL;
		tmp->next = *s;
		*s = tmp;
	}	
}

void	push(t_list **sa, t_list **sb)
{
	t_list	*tmp;

	if (*sa != NULL)
	{
		tmp = *sa;
		*sa = (*sa)->next;
		ft_lstadd_front(&(*sb), tmp);
	}
}
