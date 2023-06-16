/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 12:37:43 by aamhal            #+#    #+#             */
/*   Updated: 2023/06/05 12:59:21 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sw(t_list **a, char *str)
{
	swap(a);
	ft_putstr_fd(str, 1);
}

void	r(t_list **a, char *str)
{
	rotation(a);
	ft_putstr_fd(str, 1);
}

void	rr(t_list **a, char *str)
{
	rev_rotation(a);
	ft_putstr_fd(str, 1);
}

void	p(t_list **a, t_list **b, char *str)
{
	push(a, b);
	ft_putstr_fd(str, 1);
}
