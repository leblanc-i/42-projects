/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamadou <idamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 23:59:49 by idamadou          #+#    #+#             */
/*   Updated: 2025/11/08 18:28:49 by idamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_size;
	size_t	dst_size;

	i = 0;
	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	if (dstsize == 0)
		return (src_size);
	if (dstsize > 0)
	{
		if (dstsize <= dst_size)
			return (src_size + dstsize);
		while (src[i] && (dst_size + i) < (dstsize - 1))
		{
			dst[dst_size + i] = src[i];
			i++;
		}
		dst[dst_size + i] = '\0';
	}
	return (dst_size + src_size);
}
