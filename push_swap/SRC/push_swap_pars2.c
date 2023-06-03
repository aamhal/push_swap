/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_pars2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 14:52:21 by aamhal            #+#    #+#             */
/*   Updated: 2023/06/03 14:28:04 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void check_atoi(char *str)
{
	int i ;
	int nbr;
	
	i = 0;
	nbr = ft_atoi(str);
	while (str[i] == '0')
		i++;
	if (ft_strlen(str + i) > 11)
		ft_error();
}

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
	i = 0;	
	while (av[i])
	{
		check_atoi(av[i]);
		i++;
	}
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


























//----------------------------------------------------------------------
void    print_nodes(t_list *s)
{
    t_list    *current;

    current = s;
    while (current != NULL)
    {
        printf("[%d]         [%d]          [%d]\n", current ->nbr,current->index,current->pos);
        current = current->next;
    }
}
 void    aff(t_list *stack_a, t_list *stack_b, int size)
{
    printf("------Start-----\n");
    while (size)
    {
        if (stack_a)
        {
            printf("%d\t", stack_a->nbr);
            stack_a = stack_a->next;
        }
        else
        {
            printf("     \t");
        }
        if (stack_b)
        {
            printf("%d", stack_b->nbr);
            stack_b = stack_b->next;
        }
        size--;
        printf("\n");
    }
    printf("-\t-\na\tb\n");
    printf("------End-----\n");
} 
//----------------------------------------------------------------------


