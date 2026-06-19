/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamadou <idamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 02:38:48 by idamadou          #+#    #+#             */
/*   Updated: 2025/11/12 13:08:19 by idamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putnbr_hex.h"
#include "ft_putchar.h"

int	ft_putnbr_hex(unsigned long n)
{
	char	*base;
	int		len;
	int		content;

	len = 0;
	base = "0123456789abcdef";
	if (n >= 16)
	{
		content = ft_putnbr_hex(n / 16);
		if (content == -1)
			return (-1);
		len += content;
	}
	if (ft_putchar(base[n % 16]) == -1)
		return (-1);
	len ++;
	return (len);
}
