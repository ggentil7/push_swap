/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielagentil <gabrielagentil@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:14:09 by gabrielagen       #+#    #+#             */
/*   Updated: 2022/06/20 16:50:59 by gabrielagen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	string_conv(t_ps *ps, char **argv)
{
	char	**tmp;
	int		i;

	i = -1;
	tmp = ft_split(*argv, ' ');
	while (tmp[++i])
		return ;
	malloc_all(ps, 0, i);

}

void	check_doublon(t_ps *ps)
{
	int	i;
	int	j;

	i = 0;
	
}