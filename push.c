/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggentil <ggentil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:53:58 by gabrielagen       #+#    #+#             */
/*   Updated: 2022/07/04 17:06:01 by ggentil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_ps *ps)
{
	int	i;

	i = -1;
	if (ps->b && ps->size_b > 0)
	{
		ps->tmp_a = malloc(sizeof(int) * (ps->size_a + 1));
		ps->tmp_a[0] = ps->b[0];
		while (ps->a && ++i < ps->size_a)
			ps->tmp_a[i + 1] = ps->a[i];
		ps->size_a++;
		if (ps->a)
			free(ps->a);
		ps->a = ps->tmp_a;
		ps->tmp_b = malloc(sizeof(int) * (ps->size_b - 1));
		i = 0;
		while (ps->b && ++i < ps->size_b)
			ps->tmp_b[i - 1] = ps->b[i];
		ps->size_b--;
		free(ps->b);
		ps->b = ps->tmp_b;
		ft_printf("pa\n");
		/*i = -1;
		while (++i < ps->size_a)
		{
			printf("ps->a[%d] = '%d', ps->b[%d] = '%d'", i, ps->a[i], i, ps->b[i]);
		}*/
	}
}

void	ft_pb(t_ps *ps)
{
	int	i;

	i = -1;
	if (ps->a && ps->size_a > 0)
	{
		ps->tmp_b = malloc(sizeof(int) * (ps->size_b + 1));
		ps->tmp_b[0] = ps->a[0];
		while (ps->b && ++i < ps->size_b)
			ps->tmp_b[i + 1] = ps->b[i];
		ps->size_b++;
		if (ps->b)
			free(ps->b);
		ps->b = ps->tmp_b;
		ps->tmp_a = malloc(sizeof(int) * (ps->size_a - 1));
		i = 0;
		while (ps->a && ++i < ps->size_a)
			ps->tmp_a[i - 1] = ps->a[i];
		ps->size_a--;
		free(ps->a);
		ps->a = ps->tmp_a;
		ft_printf("pb\n");
	}
}
