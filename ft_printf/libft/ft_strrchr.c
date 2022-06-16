/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggentil <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:12:26 by ggentil           #+#    #+#             */
/*   Updated: 2021/11/08 16:51:32 by ggentil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen ((char *) s) - 1;
	if (c == 0)
		return ((char *) s + (i + 1));
	while (i >= 0)
	{
		if ((char) s[i] == (char) c)
			return ((char *) &s[i]);
		i--;
	}
	return (0);
}
