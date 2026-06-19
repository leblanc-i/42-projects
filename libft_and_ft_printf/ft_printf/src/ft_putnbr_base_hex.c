/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_hex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamadou <idamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 01:46:15 by idamadou          #+#    #+#             */
/*   Updated: 2025/11/12 13:06:07 by idamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putnbr_base_hex.h"
#include "ft_putchar.h"
#include "ft_strcpy.h"

int	ft_putnbr_base_hex(unsigned int n, int uppercase)
{
	char	base[17];
	int		len;
	int		content;

	if (uppercase)
		ft_strcpy(base, "0123456789ABCDEF");
	else
		ft_strcpy(base, "0123456789abcdef");
	len = 0;
	if (n >= 16)
	{
		content = ft_putnbr_base_hex(n / 16, uppercase);
		if (content == -1)
			return (-1);
		len += content;
	}
	if (ft_putchar(base[n % 16]) == -1)
		return (-1);
	len ++;
	return (len);
}
