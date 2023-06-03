/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:48:42 by aamhal            #+#    #+#             */
/*   Updated: 2023/06/03 19:34:09 by aamhal           ###   ########.fr       */
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
    if (first->index == 1 && second->index == 0 && third->index == 2)
        swap_a(s);
    else if (first->index == 2 && second->index == 1 && third->index == 0)
    {
        swap_a(s);
        rev_rotat_a(s);
    }
    else if (first->index == 0 && second->index == 2 && third->index == 1)
    {
        swap_a(s);
        rotat_a(s);
    }
    else if (first->index == 2 && second->index == 0 && third->index == 1)
        rotat_a(s);
    else if (first->index == 1 && second->index == 2 && third->index == 0)
        rev_rotat_a(s);
    else 
        return ;
}