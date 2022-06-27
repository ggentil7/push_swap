/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggentil <ggentil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:53:58 by gabrielagen       #+#    #+#             */
/*   Updated: 2022/06/27 22:42:04 by ggentil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_ps *ps)
{
	int	i;

	i = -1;
	if (ps->b && ps->b[0])
	{
		printf("size_a = %d\n", ps->size_a);
		ps->size_a++;
		ps->tmp_a = malloc(sizeof(int) * ps->size_a);
		ps->tmp_a[0] = ps->b[0];
		while (ps->a && ps->a[++i])
			ps->tmp_a[i + 1] = ps->a[i];
		printf("coucou1\n");
		if (ps->a)
			free(ps->a);
		printf("coucou2\n");
		ps->a = ps->tmp_a;
		ps->size_b--;
		printf("coucou3\n");
		if (ps->b && ps->b[1])
		{
			printf("coucou4\n");
			ps->tmp_b = malloc(sizeof(int) * ps->size_b);
			printf("coucou5\n");
			i = 0;
			while (ps->b && ps->b[++i])
			ps->tmp_b[i - 1] = ps->b[i];
			printf("coucou6\n");
			free(ps->b);
			ps->b = ps->tmp_b;
			printf("coucou7\n");
		}
		else
			free(ps->b);
		ft_printf("pa\n");
	}
}

void	ft_pb(t_ps *ps)
{
	int	i;

	i = -1;
	if (ps->a && ps->a[0])
	{
		ps->size_b++;
		ps->tmp_b = malloc(sizeof(int) * ps->size_b);
		ps->tmp_b[0] = ps->a[0];
		while (ps->b && ps->b[++i])
			ps->tmp_b[i + 1] = ps->b[i];
		if (ps->b)
			free(ps->b);
		ps->b = ps->tmp_b;
		ps->size_a--;
		if (ps->a && ps->a[1])
		{
			ps->tmp_a = malloc(sizeof(int) * ps->size_a);
			i = 0;
			while (ps->a && ps->a[++i])
				ps->tmp_a[i - 1] = ps->a[i];
			free(ps->a);
			ps->a = ps->tmp_a;
		}
		else
			free(ps->a);
		ft_printf("pb\n");
	}
}
