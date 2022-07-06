/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggentil <ggentil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 20:55:50 by ggentil           #+#    #+#             */
/*   Updated: 2022/07/06 17:22:40 by ggentil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_solve(t_ps *ps)
{
	if (ps->size_a == 2)
		ft_sa(ps);
	if (ps->size_a == 3)
		ft_solve3(ps);
	if (ps->size_a == 4)
		ft_solve4(ps);
	if (ps->size_a == 5)
		ft_solve5(ps);
	else
		radix(ps);
	free (ps->a);
	free (ps->b);
	return (0);
}

int	ft_solve3(t_ps *ps)
{
	int	i;

	i = 0;
	if (ps->a[i] > ps->a[i + 1] && ps->a[i] > ps->a[i + 2])
		ft_ra(ps);
	if (ps->a[i + 1] > ps->a[i] && ps->a[i + 1] > ps->a[i + 2])
		ft_rra(ps);
	if (ps->a[i] > ps->a[i + 1])
		ft_sa(ps);
	return (0);
}

int	find_max(t_ps *ps)
{
	int	i;
	int	j;

	i = 0;
	while (i < ps->size_a)
	{
		j = i + 1;
		while (j < ps->size_a)
		{
			if (ps->a[i] > ps->a[j])
				j++;
			else
				break ;
		}
		if (j == ps->size_a)
			return (i);
		i++;
	}
	return (0);
}

int	ft_solve4(t_ps *ps)
{
	push_to_the_top(ps);
	ft_pb(ps);
	ft_solve3(ps);
	ft_pa(ps);
	ft_ra(ps);
	return (0);
}

int	ft_solve5(t_ps *ps)
{
	push_to_the_top(ps);
	ft_pb(ps);
	ft_solve4(ps);
	ft_pa(ps);
	ft_ra(ps);
	return (0);
}
