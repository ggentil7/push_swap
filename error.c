/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggentil <ggentil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:14:09 by gabrielagen       #+#    #+#             */
/*   Updated: 2022/06/27 22:32:02 by ggentil          ###   ########.fr       */
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

void	string_conv(t_ps *ps, char **argv)
{
	char	**tmp;
	int		i;

	i = 0;
	tmp = ft_split(argv[1], ' ');
	while (tmp[i])
		i++;
	malloc_all(ps, 0, i);
	ps->size_a = i;
	i = -1;
	while (tmp[++i])
		ps->a[i] = ft_atoi(tmp[i]);
	i = -1;
	while (++i < ps->size_a)
		free(tmp[i]);
	free(tmp);
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

void	fill_stack(t_ps *ps, int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (argc == 2)
		string_conv(ps, argv);
	else if (argc != 2)
	{
		malloc_all(ps, 1, argc - 1);
		while (argv[j])
		{
			ps->a[i] = ft_atoi(argv[j]);
			i++;
			j++;
		}
		ps->size_a = argc - 1;
	}
	ps->size_b = 0;
}

int	check_sorted(t_ps *ps)
{
	int	i;

	i = 0;
	while (ps->a[i] && ps->a[i + 1])
	{
		if (ps->a[i] > ps->a[i + 1])
			return (0);
		else
			i++;
	}
	return (1);
}
