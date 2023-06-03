/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_b_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 12:42:47 by aamhal            #+#    #+#             */
/*   Updated: 2023/06/03 17:22:40 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_b(t_list **b)
{
	swap(b);
	ft_printf("sb\n");
}

void rotat_b(t_list **b)
{
	rotation(b);
	ft_printf("rb\n");
}

void rev_rotat_b(t_list **b)
{
	rev_rotation(b);
	ft_printf("rrb\n");
}

void push_b(t_list **a, t_list **b)
{
	push(b, a);
	ft_printf("pb\n");
}