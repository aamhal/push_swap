/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:53:02 by aamhal            #+#    #+#             */
/*   Updated: 2023/06/04 17:49:51 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	int		*tmp;
	char	**p;
	int i;
	i = 0;

	if (ac < 2)
		return (0);
	p = parsing(ac, av);
	tmp = char_int(p);
	a = fill_stack(tmp, p);
	find_index(&a);
	nbr_position(&a);
	if (ac == 4)
	{
		sort_3_nbr(&a);
	}
	else if (ac == 5)
		sort_4_nbr(&a, &b);
	else if (ac == 6)
		sort_5_nbr(&a, &b);
	else
	{
	fill_stack_b(&a,&b);
	nbr_position(&b);
	fill_stack_a(&a,&b);
	}

	return (0);
}
