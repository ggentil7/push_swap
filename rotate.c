/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggentil <ggentil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:54:46 by gabrielagen       #+#    #+#             */
/*   Updated: 2022/06/23 15:30:37 by ggentil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_ps *ps)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = ps->a[0];
	while (i < ps->compt_a - 1)
	{
		ps->compt_a[i] = ps->compt_a[i + 1];
		i++;
	}
	ps->a[i] = tmp;
	ft_printf("ra\n");
}

void	ft_rb(t_ps *ps)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = ps->b[0];
	while (i < ps->compt_b - 1)
	{
		ps->compt_b[i] = ps->compt_b[i + 1];
		i++;
	}
	ps->b[i] = tmp;
	ft_printf("rb\n");
}

void	ft_rr(t_ps *ps)
{
	ft_ra(ps);
	ft_rb(ps);
	ft_printf("rr\n");
}
