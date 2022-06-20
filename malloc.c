/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielagentil <gabrielagentil@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:41:52 by gabrielagen       #+#    #+#             */
/*   Updated: 2022/06/20 12:53:29 by gabrielagen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	malloc_all(t_ps *ps, int n, int size)
{
	if (n == 0)
	{
		ps->a = malloc(sizeof(int) * size);
		ps->b = malloc(sizeof(int) * size);
		ps->temp = malloc(sizeof(int) * size);
	}
	if (n == 1)
		ps->a = malloc(sizeof(int) * size);
	if (n == 2)
		ps->b = malloc(sizeof(int) * size);
	if (n == 3)
		ps->temp = malloc(sizeof(int) * size);
}
