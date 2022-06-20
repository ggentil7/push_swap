/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielagentil <gabrielagentil@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:53:58 by gabrielagen       #+#    #+#             */
/*   Updated: 2022/06/20 14:48:43 by gabrielagen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_ps *ps)
{
	int	tmp;

	tmp = 0;
	tmp = ps->a[0];
	ps->a[0] = ps->b[0];
	ps->b[0] = tmp;
}

void	ft_pb(t_ps *ps)
{
	int	tmp;

	tmp = 0;
	tmp = ps->b[0];
	ps->b[0] = ps->a[0];
	ps->a[0] = tmp;
}