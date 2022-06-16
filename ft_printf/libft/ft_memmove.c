/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggentil <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:37:02 by ggentil           #+#    #+#             */
/*   Updated: 2021/11/17 16:06:30 by ggentil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dest;
	unsigned char		*source;

	i = 0;
	dest = (unsigned char *) dst;
	source = (unsigned char *) src;
	if (src == NULL & dst == NULL)
		return (NULL);
	if (dest > source)
	{
		while (i < len)
		{
			dest[len - 1] = source[len - 1];
			len--;
		}
	}
	while (i < len)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}
