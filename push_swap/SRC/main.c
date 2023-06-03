/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:53:02 by aamhal            #+#    #+#             */
/*   Updated: 2023/06/03 19:04:26 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	int *tmp;
	char **p;

	if (ac < 2)
		return (0);
	p = parsing(ac, av);
	tmp = char_int(p, ac);
	a = fill_stack(tmp, ac -1);
	nbr_position(&a);
	if (ac == 4)
	{
		find_index(&a);
		sort_3_nbr(&a);
	}
	else if (ac == 5)
		sort_4_nbr(&a,&b);
	else if (ac == 6)
		sort_5_nbr(&a,&b);
	else
		exit(0);
	print_nodes(a);
	// aff(a,b,5);
	
	return (0);
}