/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielagentil <gabrielagentil@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:48:48 by gabrielagen       #+#    #+#             */
/*   Updated: 2022/06/20 14:48:40 by gabrielagen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include "./ft_printf/ft_printf.h"

typedef struct s_ps {
	int	*a;
	int	*b;
	int	*temp;
	int	compt_a;
	int	compt_b,
}	t_ps;

void	ft_sa(t_ps *ps);
void	ft_sb(t_ps *ps);
void	ft_ss(t_ps *ps);

void	ft_pa(t_ps *ps);
void	ft_pb(t_ps *ps);

void	malloc_all(t_ps *ps, int n, int size);
void	string_conv(t_ps *ps, char **argv);

#endif