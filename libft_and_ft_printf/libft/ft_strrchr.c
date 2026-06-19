/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamadou <idamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 04:45:04 by idamadou          #+#    #+#             */
/*   Updated: 2025/11/08 18:29:44 by idamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		slen;
	char	cr;
	char	*str;

	cr = (char)c;
	str = (char *)s;
	slen = ft_strlen(str);
	if (slen == 0)
		slen = -1;
	else
		slen = slen - 1;
	while (slen >= 0)
	{
		if (str[slen] == cr)
			return (str + slen);
		slen--;
	}
	if (cr == '\0')
		return (str + ft_strlen(str));
	return (NULL);
}
