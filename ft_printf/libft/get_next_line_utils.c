/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggentil <ggentil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 13:04:57 by ggentil           #+#    #+#             */
/*   Updated: 2022/04/12 11:09:40 by ggentil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	gnl_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*gnl_strjoin(char *reminder, char *buf)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!reminder)
	{
		reminder = (char *)malloc(1 * sizeof(char));
		reminder[0] = '\0';
	}
	if (!reminder || !buf)
		return (NULL);
	str = malloc((gnl_strlen(reminder) + gnl_strlen(buf) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (reminder)
		while (reminder[++i] != '\0')
			str[i] = reminder[i];
	while (buf[j] != '\0')
		str[i++] = buf[j++];
	str[gnl_strlen(reminder) + gnl_strlen(buf)] = '\0';
	free(reminder);
	return (str);
}

char	*gnl_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if ((char) *s == (char) c)
			return ((char *) s);
		s++;
	}
	if ((char) c == 0)
		return ((char *) s);
	return (NULL);
}
