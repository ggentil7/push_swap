/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggentil <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:19:05 by ggentil           #+#    #+#             */
/*   Updated: 2021/11/12 15:56:49 by ggentil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*mapi;

	i = 0;
	if (!s)
		return (NULL);
	mapi = ft_strdup(s);
	if (!mapi)
		return (NULL);
	while (mapi[i])
	{
		mapi[i] = f(i, mapi[i]);
		i++;
	}
	return (mapi);
}
