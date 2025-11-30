/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamadou <idamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 20:47:46 by idamadou          #+#    #+#             */
/*   Updated: 2025/11/30 20:47:56 by idamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(const char *dest, const char *src)
{
	size_t		i;
	size_t		j;
	char		*result;

	if (!dest || !src)
		return (NULL);
	result = malloc(ft_strlen(dest) + ft_strlen(src) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (dest[i])
	{
		result[i] = dest[i];
		i++;
	}
	j = 0;
	while (src[j])
	{
		result[i] = src[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
