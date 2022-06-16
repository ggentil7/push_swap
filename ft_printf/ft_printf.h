/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggentil <ggentil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:41:37 by ggentil           #+#    #+#             */
/*   Updated: 2021/11/30 12:09:24 by ggentil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "./libft/libft.h"

int		ft_printchar(int c);
int		ft_printnbr(int nb);
int		ft_printstr(char *str);
int		ft_formats(va_list args, const char format, int len);
int		ft_printf(const char *format, ...);
int		ft_print_unsigned(unsigned int nb);
int		ft_print_len(unsigned long int nb);
int		ft_hexa_len(unsigned long long int nb);
int		ft_print_hexa(unsigned long long int n, int format);

char	*ft_uitoa(unsigned int n);

void	ft_putstr(char *str);

#endif 