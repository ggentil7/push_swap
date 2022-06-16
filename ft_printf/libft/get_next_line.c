/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggentil <ggentil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:51:21 by ggentil           #+#    #+#             */
/*   Updated: 2022/04/12 11:13:10 by ggentil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_line(char *reminder)
{
	char	*str;
	int		i;

	i = 0;
	if (!reminder[i])
		return (NULL);
	while (reminder[i] && reminder[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (reminder[i] && reminder[i] != '\n')
	{
		str[i] = reminder[i];
		i++;
	}
	if (reminder[i] == '\n')
	{
		str[i] = reminder[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*read_and_save(int fd, char *reminder)
{
	char	*buf;
	int		reading;

	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	reading = 1;
	while (!gnl_strchr(reminder, '\n') && reading != 0)
	{
		reading = read(fd, buf, BUFFER_SIZE);
		if (reading == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[reading] = '\0';
		reminder = gnl_strjoin(reminder, buf);
	}
	free(buf);
	return (reminder);
}

char	*new_reminder(char *reminder)
{
	char	*new_reminder;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (reminder[i] && reminder[i] != '\n')
		i++;
	if (!reminder[i])
	{
		free(reminder);
		return (NULL);
	}	
	new_reminder = (char *)malloc(sizeof(char) * (gnl_strlen(reminder)
				- i + 1));
	if (!new_reminder)
		return (NULL);
	i++;
	while (reminder[i])
	{
		new_reminder[j++] = reminder[i++];
	}
	new_reminder[j] = '\0';
	free(reminder);
	return (new_reminder);
}

char	*get_next_line(int fd)
{
	char		*line;
	char static	*reminder;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	reminder = read_and_save(fd, reminder);
	if (!reminder)
		return (NULL);
	line = get_line(reminder);
	reminder = new_reminder(reminder);
	return (line);
}
