/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_a_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 12:37:43 by aamhal            #+#    #+#             */
/*   Updated: 2023/06/03 17:23:07 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_a(t_list **a)
{
	swap(a);
	ft_printf("sa\n");
}

void rotat_a(t_list **a)
{
	rotation(a);
	ft_printf("ra\n");
}

void rev_rotat_a(t_list **a)
{
	rev_rotation(a);
	ft_printf("rra\n");
}

void push_a(t_list **a, t_list **b)
{
	push(a, b);
	ft_printf("pa\n");
}
