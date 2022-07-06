/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggentil <ggentil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:32:00 by ggentil           #+#    #+#             */
/*   Updated: 2022/07/06 15:37:26 by ggentil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int			temp;
	int			i;
	int			j;
	char		**tab;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	tab = (char **)ft_calloc(count(s, c) + 1, sizeof(char *));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		temp = i;
		while (s[i] && s[i] != c)
			i++;
		if (temp != i)
			tab[j++] = ft_substr(s, temp, i - temp);
	}
	return (tab);
}
