/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggentil <ggentil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 15:39:07 by ggentil           #+#    #+#             */
/*   Updated: 2022/06/30 18:50:47 by ggentil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	normalize(t_ps *ps)
{
	int	i;
	int	j;
	int	*normalize;

	i = 0;
	normalize = malloc(sizeof(int) * (ps->size_a));
	normalize = bubble_sort(ps, normalize);
	while (i < ps->size_a)
	{
		j = 0;
		while (j < ps->size_a)
		{
			if (ps->a[i] == normalize[j])
				ps->a[i] = j;
			j++;
		}
		i++;
	}
	return (0);
}

int	*bubble_sort(t_ps *ps, int *sorted)
{
	int	i;
	int	j;
	int	tmp;

	i = -1;
	tmp = 0;
	while (++i < ps->size_a)
		sorted[i] = ps->a[i];
	i = 0;
	while (i < ps->size_a)
	{
		j = 0;
		while (j < ps->size_a)
		{
			if (sorted[i] < sorted[j])
			{
				tmp = sorted[i];
				sorted[i] = sorted[j];
				sorted[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (sorted);
}

int	radix(t_ps *ps)
{
	int	i;
	int	bits;

	bits = 0;
	normalize(ps);
	while (check_sorted(ps) == 0)
	{
		i = -1;
		while (++i < ps->size_a)
		{
			if ((ps->a[i] >> bits & 1) == 1)
				ft_ra(ps);
			else
				ft_pb(ps);
		}
		bits++;
		while (ps->size_b)
			ft_pa(ps);
	}
	return (0);
}
