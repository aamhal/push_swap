/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:48:42 by aamhal            #+#    #+#             */
/*   Updated: 2023/06/02 18:07:46 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_3_nbr(t_list **s)
{
	t_list *first;
	t_list *second;
	t_list *third;
	
	first = (*s);
	second = (*s)->next;
	third = (*s)->next->next;
	if (first->index == 2)
	{
		if (second->index > third->index)
		{
			rotat_a(s);
			swap_a(s);
		}
		else
			rotat_a(s);
	}
	else if (second->index == 2)
	{
		if (first->index < third->index)
		{
			rev_rotat_a(s);
			swap_a(s);
		}
		else
			rev_rotat_a(s);
	}
	else if (third->index == 2)
		swap_a(s);
}