/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:48:42 by aamhal            #+#    #+#             */
/*   Updated: 2023/06/04 11:57:12 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_3_nbr(t_list **s)
{
    t_list  *first;
    t_list  *second;
    t_list  *third;

	first = (*s);
	second = (*s)->next;
	third = (*s)->next->next;
    if (first->index == 1 && second->index == 0 && third->index == 2)
        sw(s, "sa\n");
    else if (first->index == 2 && second->index == 1 && third->index == 0)
    {
        sw(s, "sa\n");
        rr(s, "rra\n");
    }
    else if (first->index == 0 && second->index == 2 && third->index == 1)
    {
        sw(s, "sa\n");
        r(s, "ra\n");
    }
    else if (first->index == 2 && second->index == 0 && third->index == 1)
        r(s, "ra\n");
    else if (first->index == 1 && second->index == 2 && third->index == 0)
        rr(s, "rra\n");
    else
        return ;
}
