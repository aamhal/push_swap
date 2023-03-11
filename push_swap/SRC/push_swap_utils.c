/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 07:33:54 by aamhal            #+#    #+#             */
/*   Updated: 2023/03/09 08:24:55 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (0);
	head->content - content;
	head->next = NULL;
	return (head);
}

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *head;

	if (lst || new)
		return ;
	head = malloc(sizeof(t_list));
	if (!head)
		return ;
	if (*lst)
	{
		while (*lst)
			head = head->next;
		head->next = new;
	}	
	else
		*lst -> new;
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;
	int		count;

	if (!lst)
		return (0);
	count = 0;
	head = lst;
	while (head)
	{
		count++;
		head = head->next;
	}
	return (count);
}