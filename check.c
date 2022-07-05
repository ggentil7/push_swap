/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggentil <ggentil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:14:09 by gabrielagen       #+#    #+#             */
/*   Updated: 2022/07/05 19:24:33 by ggentil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_isdigit(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == '-')
				j++;
			if (ft_isdigit(argv[i][j]))
				j++;
			else
			{
				ft_printf("Error: arguments\n");
				return (1);
			}
		}
		i++;
	}
	return (0);
}

int	check_isint(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (ft_atol(argv[i]) > INT_MAX || ft_atol(argv[i]) < INT_MIN)
		{
			ft_printf("Error: arguments\n");
			return (1);
		}
		else
			i++;
	}
	return (0);
}

int	check_doublon(t_ps *ps)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < ps->size_a)
	{
		i = j + 1;
		while (i < ps->size_a)
		{
			if (ps->a[j] != ps->a[i])
				i++;
			else
			{
				ft_printf("Error:\n Doublon\n");
				return (1);
			}
		}
		j++;
	}
	return (0);
}

int	check_sorted(t_ps *ps)
{
	int	i;

	i = 0;
	//debug_stack(ps);
	while (i < ps->size_a - 1)
	{
		if (ps->a[i] > ps->a[i + 1])
			return (0);
		else
			i++;
	}
	return (1);
}
