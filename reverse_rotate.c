/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggentil <ggentil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:02:47 by gabrielagen       #+#    #+#             */
/*   Updated: 2022/06/27 20:10:49 by ggentil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_ps *ps)
{
	int	tmp;
	int	i;

	i = ps->size_a - 1;
	tmp = ps->a[i];
	while (i > 0)
	{
		ps->a[i] = ps->a[i - 1];
		i--;
	}
	ps->a[0] = tmp;
	ft_printf("rra\n");
}

void	ft_rrb(t_ps *ps)
{
	int	tmp;
	int	i;

	i = ps->size_b - 1;
	tmp = ps->b[i];
	while (i > 0)
	{
		ps->b[i] = ps->b[i - 1];
		i--;
	}
	ps->b[0] = tmp;
	ft_printf("rrb\n");
}

void	ft_rrr(t_ps *ps)
{
	ft_rra(ps);
	ft_rrb(ps);
	ft_printf("rrr\n");
}
