/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamadou <idamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 23:07:46 by idamadou          #+#    #+#             */
/*   Updated: 2025/11/30 20:39:04 by idamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*read_and_fill_temp(int fd, char *temp)
{
	ssize_t	bytes;
	char	*buffer;
	char	*joined;

	buffer = malloc((size_t)BUFFER_SIZE + 1);
	if (!buffer)
		return (free(temp), NULL);
	bytes = 1;
	while (!ft_strchr(temp, '\n') && bytes > 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes < 0)
			return (free(buffer), free(temp), NULL);
		if (bytes == 0)
			break ;
		buffer[bytes] = '\0';
		joined = ft_strjoin(temp, buffer);
		free(temp);
		temp = joined;
		if (!temp)
			return (free(buffer), NULL);
	}
	free(buffer);
	return (temp);
}

char	*extract_line(char *temp)
{
	size_t	i;
	size_t	j;
	char	*line;

	if (!temp || !temp[0])
		return (NULL);
	i = 0;
	j = 0;
	while (temp[i] && temp[i] != '\n')
		i++;
	if (temp[i] == '\n')
		i++;
	line = malloc(i + 1);
	if (!line)
		return (NULL);
	i = 0;
	while (temp[j] && temp[j] != '\n')
		line[i++] = temp[j++];
	if (temp[j] == '\n')
	{
		line[i] = temp[j];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*update_temp(char *temp)
{
	char	*new_temp;
	size_t	i;
	size_t	j;

	if (!temp)
		return (NULL);
	i = 0;
	while (temp[i] && temp[i] != '\n')
		i++;
	if (!temp[i])
		return (free(temp), NULL);
	i++;
	if (!temp[i])
		return (free(temp), NULL);
	new_temp = malloc(ft_strlen(temp + i) + 1);
	if (!new_temp)
		return (free(temp), NULL);
	j = 0;
	while (temp[i])
		new_temp[j++] = temp[i++];
	new_temp[j] = '\0';
	free(temp);
	return (new_temp);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*temp[FD_MAX];

	if (fd < 0 || FD_MAX <= fd || BUFFER_SIZE <= 0)
		return (NULL);
	if (!temp[fd])
	{
		temp[fd] = malloc(1);
		if (!temp[fd])
			return (NULL);
		temp[fd][0] = '\0';
	}
	temp[fd] = read_and_fill_temp(fd, temp[fd]);
	if (!temp[fd])
		return (NULL);
	line = extract_line(temp[fd]);
	if (!line)
	{
		free(temp[fd]);
		temp[fd] = NULL;
		return (NULL);
	}
	temp[fd] = update_temp(temp[fd]);
	return (line);
}
