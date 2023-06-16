/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:53:02 by aamhal            #+#    #+#             */
/*   Updated: 2023/06/15 13:41:52 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_arg(t_list **a, t_list **b, int i)
{
	if (i == 3)
		sort_3_nbr(a);
	else if (i == 4)
		sort_4_nbr(a, b);
	else if (i == 5)
		sort_5_nbr(a, b);
	else
	{
		fill_stack_b(a, b);
		nbr_position(b);
		fill_stack_a(a, b);
	}
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	int		*tmp;
	char	**p;
	int		i;

	i = 0;
	if (ac < 2)
		return (0);
	p = parsing(ac, av);
	tmp = char_int(p);
	a = fill_stack(tmp, p);
	free(tmp);
	while (p[i])
		i++;
	ft_free(p);
	find_index(&a);
	nbr_position(&a);
	if_nbr_sort(&a);
	check_arg(&a, &b, i);
	ft_free_ll(&a);
	ft_free_ll(&b);
	return (0);
}
