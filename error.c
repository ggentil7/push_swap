/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggentil <ggentil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:14:09 by gabrielagen       #+#    #+#             */
/*   Updated: 2022/06/22 18:06:53 by ggentil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	string_conv(t_ps *ps, char **argv)
{
	char	**tmp;
	int		i;

	i = -1;
	tmp = ft_split(*argv, ' ');
	while (tmp)
		++i;
	malloc_all(ps, 0, i);
	ps->compt_a = i;
	i = -1;
	while (tmp[++i])
		ps->a[i] = ft_atoi(tmp[i]);
	i = -1;
	while (++i < ps->compt_a)
		free(tmp[i]);
	free(tmp);
}

void	check_doublon(t_ps *ps)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < ps->compt_a)
	{
		i = j + 1;
		while (i < ps->compt_a)
		{
			if (ps->compt_a[j] != ps->compt_a[i])
				i++;
			else
				ft_printf("Error:\n Doublon\n");
			exit (EXIT_SUCCESS);
		}
		j++;
	}
}

void	check_args(t_ps *ps, int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 3)
		string_conv(ps, argv);
	else if (argc != 2)
	{
		malloc_all(ps, 0, argc - 1);
		while (argv[i])
		{
			ps->a[j] = ft_atoi(argv[i]);
			i++;
			j++;
		}
		ps->compt_a = argc - 1;
	}
	ps->compt_b = 0;
}
