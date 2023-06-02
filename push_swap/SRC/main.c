/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:53:02 by aamhal            #+#    #+#             */
/*   Updated: 2023/06/02 18:38:26 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;
	// t_list	*b;
	int *tmp;
	char **p;

	if (ac < 2)
		return (0);
	p = parsing(ac, av);
	tmp = char_int(p, ac);
	a = fill_stack(tmp);
	nbr_position(&a);
	find_index(&a);
	if_nbr_sort(&a);
	sort_3_nbr(&a);
	printf("nbr        index         pos\n");
	print_nodes(a);

	
	return (0);
}