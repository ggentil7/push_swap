/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggentil <ggentil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:54:17 by gabrielagen       #+#    #+#             */
/*   Updated: 2022/06/23 15:20:24 by ggentil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_ps *ps)
{
	int	tmp;

	tmp = 0;
	tmp = ps->a[0];
	ps->a[0] = ps->a[1];
	ps->a[1] = tmp;
}

void	ft_sb(t_ps *ps)
{
	int	tmp;

	tmp = 0;
	tmp = ps->b[0];
	ps->b[0] = ps->b[1];
	ps->b[1] = tmp;
}

void	ft_ss(t_ps *ps)
{
	ft_sa(ps);
	ft_sb(ps);
	ft_printf("ss\n");
}
