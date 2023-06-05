/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:25:36 by aamhal            #+#    #+#             */
/*   Updated: 2023/06/05 14:43:33 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_check_input2(t_list **a, t_list **b, char *gnl)
{
	if (!ft_strcmp(gnl, "ra\n"))
		rotation(a);
	else if (!ft_strcmp(gnl, "rb\n"))
		rotation(b);
	else if (!ft_strcmp(gnl, "rr\n"))
	{
		rotation(a);
		rotation(b);
	}
	else if (!ft_strcmp(gnl, "rra\n"))
		rev_rotation(a);
	else if (!ft_strcmp(gnl, "rrb\n"))
		rev_rotation(b);
	else if (!ft_strcmp(gnl, "rrr\n"))
	{
		rev_rotation(a);
		rev_rotation(b);
	}
	else if (!ft_strcmp(gnl, "pa\n"))
		push(b, a);
	else if (!ft_strcmp(gnl, "pb\n"))
		push(a, b);
	else
		ft_error();
}

void	ft_check_input(t_list **a, t_list **b, char *gnl)
{
	if (!ft_strcmp(gnl, "sa\n"))
		swap(a);
	else if (!ft_strcmp(gnl, "sb\n"))
		swap(b);
	else if (!ft_strcmp(gnl, "ss\n"))
	{
		swap(a);
		swap(b);
	}
	else
		ft_check_input2(a, b, gnl);
}

void	output(char *str, int i)
{
	ft_putstr_fd(str, 2);
	exit(i);
}

void	ft_free2(char **p, int *tmp)
{
	ft_free(p);
	free(tmp);
}
