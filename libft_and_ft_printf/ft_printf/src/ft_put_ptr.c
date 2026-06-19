/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamadou <idamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 02:50:20 by idamadou          #+#    #+#             */
/*   Updated: 2025/11/11 22:30:24 by idamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_put_ptr.h"
#include "ft_putnbr_hex.h"

int	ft_put_ptr(void *ptr)
{
	unsigned long	addr;
	int				len;
	int				content;

	if (!ptr)
	{
		if (write(1, "0x0", 3) == -1)
			return (-1);
		return (3);
	}
	len = 0;
	addr = (unsigned long)ptr;
	if (write(1, "0x", 2) == -1)
		return (-1);
	len = 2;
	content = ft_putnbr_hex(addr);
	if (content == -1)
		return (-1);
	len += content;
	return (len);
}
