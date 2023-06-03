/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:53:02 by aamhal            #+#    #+#             */
/*   Updated: 2023/06/03 18:59:42 by aamhal           ###   ########.fr       */
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
	find_index(&a);	
	// sort_3_nbr(&a);
	// sort_4_nbr(&a,&b);
	sort_5_nbr(&a,&b);
	print_nodes(a);
	// aff(a,b,5);
	
	return (0);
}