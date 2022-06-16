/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggentil <ggentil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:53:07 by ggentil           #+#    #+#             */
/*   Updated: 2021/11/30 12:09:20 by ggentil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_len(unsigned long long int nb)
{
	unsigned int	len;

	len = 0;
	if (nb == 0)
		len++;
	while (nb > 0)
	{
		nb = nb / 16;
		len++;
	}
	return (len);
}

int	ft_print_hexa(unsigned long long int n, int format)
{
	char	*str;

	if (format == 1)
		str = "0123456789ABCDEF";
	if (format == 0)
		str = "0123456789abcdef";
	if (n >= 0 && n <= 15)
	{
		ft_printchar(str[n]);
	}
	else
	{
		ft_print_hexa(n / 16, format);
		ft_print_hexa(n % 16, format);
	}
	return (ft_hexa_len(n));
}
