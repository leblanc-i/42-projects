/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamadou <idamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:19:45 by idamadou          #+#    #+#             */
/*   Updated: 2025/11/08 19:08:43 by idamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ds;
	unsigned char	*sc;

	if (!dst && !src)
		return (NULL);
	i = 0;
	ds = (unsigned char *)dst;
	sc = (unsigned char *)src;
	while (i < n)
	{
		ds[i] = sc[i];
		i++;
	}
	return (dst);
}
