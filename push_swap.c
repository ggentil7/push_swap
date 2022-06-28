/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggentil <ggentil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:08:05 by ggentil           #+#    #+#             */
/*   Updated: 2022/06/28 22:06:47 by ggentil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_ps	ps;

	if (check_isdigit(argv))
		return (1);
	if (check_isint(argv))
		return (1);
	fill_stack(&ps, argc, argv);
	if (check_doublon(&ps))
		return (1);
	if (check_sorted(&ps))
		return (0);
	if (ft_solve(&ps))
		return (1);
	print_stack(&ps);
	ft_printf("%d", find_min(&ps));
	ft_printf("%d", find_max(&ps));
	return (0);
}
