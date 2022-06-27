/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggentil <ggentil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:48:48 by gabrielagen       #+#    #+#             */
/*   Updated: 2022/06/27 19:56:25 by ggentil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include "./ft_printf/ft_printf.h"
# include <limits.h>

typedef struct s_ps {
	int	*a;
	int	*b;
	int	*temp;
	int	size_a;
	int	size_b;
}	t_ps;

void	ft_sa(t_ps *ps);
void	ft_sb(t_ps *ps);
void	ft_ss(t_ps *ps);

void	ft_ra(t_ps *ps);
void	ft_rb(t_ps *ps);
void	ft_rr(t_ps *ps);

void	ft_rra(t_ps *ps);
void	ft_rrb(t_ps *ps);
void	ft_rrr(t_ps *ps);

void	ft_pa(t_ps *ps);
void	ft_pb(t_ps *ps);

int		check_isdigit(char **argv);
int		check_isint(char **argv);
int		check_doublon(t_ps *ps);
int		check_sorted(t_ps *ps);
void	fill_stack(t_ps *ps, int argc, char **argv);
void	malloc_all(t_ps *ps, int n, int size);
void	string_conv(t_ps *ps, char **argv);

#endif