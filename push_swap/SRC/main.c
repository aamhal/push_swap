/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:53:02 by aamhal            #+#    #+#             */
/*   Updated: 2023/03/09 19:03:41 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_signe(char **p)
{
	int i;
	int j;
	
	i = 0;
	while (p[i])
	{
		j = 0;
		if (p[i][j] != '-' || p[i][j] != '+')
			return (-1);
	}
	return (0);
}

int	check_spaces(char *p)
{
	int	i;

	i = 0;
	while (p[i])
	{
		if (p[i] != 32)
			return (0);
		i++;
	}
	return (-1);
}

int	main(int ac, char **av)
{
	char	**p;
	char	*tmp;
	int		i;

	i = 1;
	while (av[i])
	{
		if ((check_spaces(av[i]) == -1) || (ft_atoi(av[i]) == -1))
		{
			ft_printf("Error\n");
			exit(1);
		}
		i++;
	}
	tmp = ft_join_param(ac, av);
	p = ft_split(tmp, 32);
	if (ft_check_is_valid(p) == -1 || check_signe(p) == -1)
	{
		ft_printf("Error\n");
		exit(1);
	}
	return (0);
}
