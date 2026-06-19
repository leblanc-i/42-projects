/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamadou <idamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 04:01:03 by idamadou          #+#    #+#             */
/*   Updated: 2025/11/04 06:26:43 by idamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	cr;
	char	*str;

	i = 0;
	cr = (char)c;
	str = (char *)s;
	while (s[i] != '\0')
	{
		if (str[i] == cr)
		{
			return (str + i);
		}
		i++;
	}
	if (cr == '\0')
	{
		return (str + i);
	}
	return (NULL);
}
