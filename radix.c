/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggentil <ggentil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 15:39:07 by ggentil           #+#    #+#             */
/*   Updated: 2022/06/30 16:39:00 by ggentil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	normalize(t_ps *ps)
{
	int	i;
	int	j;
	int	*normalize;

	i = -1;
	j = -1;
	normalize = malloc(sizeof(int) * (ps->size_a));
	while (++i < ps->size_a)
		normalize[i] = -1;
	i = -1;
	while (++i < ps->size_a)
	{
		normalize[0] = ps->a[find_min(ps)];
	}
	print_stack(ps, normalize);
	return (0);
}

int	bubble_sort(t_ps *ps)
{
	
}
