/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:49:17 by aamhal            #+#    #+#             */
/*   Updated: 2023/06/01 11:07:40 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap(t_list **s)
{
	if (*s != NULL && (*s)->next != NULL)
	{
		t_list *node1;	
		t_list *node2;	
		
		node1 = *s;
		node2 = (*s)->next;
		node1->next = node2->next;
		node2->next = node1;
		*s = node2; 
	}
}

void rotation(t_list **s)
{
	if (*s != NULL && (*s)->next != NULL)
	{
		t_list *tmp;
		t_list *last;

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
	if (*s != NULL && (*s)->next != NULL)
	{
		t_list *tmp;
		t_list *x;

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

void push(t_list **sa, t_list **sb)
{
	if (*sa != NULL)
	{
		t_list *tmp;
		
		tmp = *sa;
		*sa = (*sa)->next;
		ft_lstadd_front(&(*sb), tmp);
	}
}