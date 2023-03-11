/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puch_swap_parc1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:10:18 by aamhal            #+#    #+#             */
/*   Updated: 2023/03/09 13:19:10 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_join_param(int ac, char **p)
{
	char	*tmp;
	int		i;

	i = 1;
	tmp = ft_strdup("");
	while (i < ac)
	{
		tmp = ft_strjoin(tmp, p[i]);
		tmp = ft_strjoin(tmp, " ");
		i++;
	}
	return (tmp);
}

int	ft_check_char(char *p)
{
	int	i;

	i = 1;
	while (p[i])
	{
		if (!ft_isdigit(p[i]))
			return (-1);
		i++;
	}	
	return (0);
}

int	ft_check_first_char(char c)
{
	if (ft_isdigit(c))
		return (0);
	else if (c == '+' || c == '-')
		return (0);
	return (-1);
}

int	ft_check_duplicat(char **p)
{
	int	i;
	int	j;

	i = 0;
	while (p[i])
	{
		j = 0;
		while (p[j])
		{
			if (ft_atoi(p[i]) == ft_atoi(p[j]) && i != j)
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_check_is_valid(char **p)
{
	int	i;

	i = 0;
	while (p[i])
	{
		if (ft_check_first_char(p[i][0]) == -1)
			return (-1);
		if (ft_check_char(p[i]) == -1)
			return (-1);
		i++;
	}
	if (ft_check_duplicat(p) == -1)
		return (-1);
	return (0);
}
