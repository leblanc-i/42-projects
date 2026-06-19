/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamadou <idamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 07:45:23 by idamadou          #+#    #+#             */
/*   Updated: 2025/11/07 08:05:31 by idamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	size_t			j;
	char			*str;
	char			*fnd;

	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	i = 0;
	str = (char *)haystack;
	fnd = (char *)needle;
	while (str[i] && i < len)
	{
		j = 0;
		while (((i + j) < len) && (str[i + j] == fnd[j]))
		{
			j++;
			if (fnd[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (NULL);
}
