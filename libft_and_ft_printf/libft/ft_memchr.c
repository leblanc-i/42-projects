/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamadou <idamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 07:19:10 by idamadou          #+#    #+#             */
/*   Updated: 2025/11/04 06:27:32 by idamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	cr;

	i = 0;
	cr = (unsigned char)c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == cr)
			return (str + i);
		i++;
	}
	return (NULL);
}
