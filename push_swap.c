/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggentil <ggentil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:08:05 by ggentil           #+#    #+#             */
/*   Updated: 2022/06/27 22:41:33 by ggentil          ###   ########.fr       */
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
	for (int i = 0; i < ps.size_a; i++)
		printf("%d ", ps.a[i]);
	printf("\n");
	ft_pb(&ps);
	for (int i = 0; i < ps.size_a; i++)
		printf("%d ", ps.a[i]);
	printf("\n");
	for (int i = 0; i < ps.size_b; i++)
		printf("%d ", ps.b[i]);
	printf("\n");
	ft_pb(&ps);
	ft_pb(&ps);
	ft_pa(&ps);
	ft_pa(&ps);
	for (int i = 0; i < ps.size_b; i++)
		printf("%d ", ps.b[i]);
	printf("\n");
	return (0);
}
