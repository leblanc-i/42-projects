/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamadou <idamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:10:42 by idamadou          #+#    #+#             */
/*   Updated: 2025/11/08 19:08:54 by idamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*ds;
	unsigned char	*sc;

	if (!dest && !src)
		return (NULL);
	ds = (unsigned char *)dest;
	sc = (unsigned char *)src;
	if (ds < sc)
	{
		while (len--)
			*ds++ = *sc++;
	}
	else
	{
		while (len--)
			ds[len] = sc[len];
	}
	return (dest);
}
