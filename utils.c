/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggentil <ggentil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 20:39:10 by ggentil           #+#    #+#             */
/*   Updated: 2022/07/05 21:57:38 by ggentil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		malloc_all(ps, 0, argc - 1);
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

void	malloc_all(t_ps *ps, int n, int size)
{
	if (n == 0)
	{
		ps->a = malloc(sizeof(int) * size);
		printf("a -> %p\n", ps->a);
		ps->b = malloc(sizeof(int) * size);
		ps->temp = malloc(sizeof(int) * size);
	}
	if (n == 1)
		ps->a = malloc(sizeof(int) * size);
	if (n == 2)
		ps->b = malloc(sizeof(int) * size);
	if (n == 3)
		ps->temp = malloc(sizeof(int) * size);
}

/*int	print_stack(t_ps *ps, int *stack)
{
	int	i;

	i = 0;
	ft_printf("stack a:\n");
	while (i < ps->size_a)
	{
		ft_printf("%d ", stack[i]);
		ft_printf("\n");
		i++;
	}
	return (0);
}

int	debug_stack(t_ps *ps)
{
	int	i;

	i = 0;
	ft_printf("stack a:\n");
	while (i < ps->size_a)
	{
		ft_printf("%d ", ps->a[i]);
		ft_printf(" ");
		i++;
	}
	ft_printf("\n");
	ft_printf("stack b:\n");
	i = 0;
	while (i < ps->size_b)
	{
		ft_printf("%d ", ps->b[i]);
		ft_printf(" ");
		i++;
	}
	ft_printf("\n");
	return (0);
}*/
