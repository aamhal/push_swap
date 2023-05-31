/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:53:02 by aamhal            #+#    #+#             */
/*   Updated: 2023/05/30 16:08:20 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_error(void)
{
	ft_putstr_fd("Error\n",2);
	exit(1);
}

int	check_char(char *p, char c)
{
	int	i;

	i = 0;
	while (p[i])
	{
		if (p[i] != c)
			return (0);
		i++;
	}
	return (-1);
}

char **parsing(int ac,char **av)
{
	char	**p;
	char	*tmp;
	int		i;
	int		j;
	int		k;

	i = 1;
	j = 0;
	k = 0;
	tmp = ft_join_param(ac, av);
	p = ft_split(tmp, 32);
		while (av[j])
		{
			if(!av[j][k] || check_char(av[j], ' ') == -1)
				ft_error();
			j++;
		}
	if (ft_check_is_valid(p) == -1)
		ft_error();
	return (p);
}

int *char_int(char **p ,int ac)
{
	int *tmp;
	int i;
	
	i = 0;
	tmp = malloc(sizeof(int) * ac);
	while (p[i])
	{
		
		tmp[i] = ft_atoi(p[i]);
		if (tmp[i] == 0 && check_char(p[i], '0') == 0)
			ft_error();
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

int	main(int ac, char **av)
{
	if (ac < 2)
		return (0);
	char **p;
	int *tmp;
	p = parsing(ac, av);
	tmp = char_int(p, ac);
	return (0);
}