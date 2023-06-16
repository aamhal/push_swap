/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:53:02 by aamhal            #+#    #+#             */
/*   Updated: 2023/06/15 13:40:33 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	int		*tmp;
	char	**p;
	char	*gnl;

	if (ac < 2)
		return (0);
	p = parsing(ac, av);
	tmp = char_int(p);
	a = fill_stack(tmp, p);
	find_index(&a);
	ft_free2(p, tmp);
	gnl = get_next_line(0);
	while (gnl)
	{
		ft_check_input(&a, &b, gnl);
		free(gnl);
		gnl = get_next_line(0);
	}
	free(gnl);
	if (if_nbr_sort(&a) == -1 || b)
		output("KO\n", 0);
	output("OK\n", 0);
	return (0);
}
