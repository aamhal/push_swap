/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 07:33:54 by aamhal            #+#    #+#             */
/*   Updated: 2023/06/06 16:26:10 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_list	*ft_lstnew(int nbr)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (0);
	head->nbr = nbr;
	head->next = NULL;
	return (head);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	head = *lst;
	if (head)
	{
		while (head->next)
			head = head->next;
		head->next = new;
	}	
	else
		*lst = new;
}

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*p;

	count = 0;
	if (lst == NULL)
		return (0);
	p = lst;
	while (p != NULL)
	{
		count++;
		p = p->next;
	}
	return (count);
}

void	ft_free2(char **p, int *tmp)
{
	ft_free(p);
	free(tmp);
}
