/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamadou <idamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 02:15:37 by idamadou          #+#    #+#             */
/*   Updated: 2025/11/11 22:11:51 by idamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putnbr.h"
#include "ft_putchar.h"

int	ft_putnbr(int nb)
{
	long	n;
	int		len;
	int		content;

	n = nb;
	len = 0;
	if (n < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		len ++;
		n = -n;
	}
	if (n >= 10)
	{
		content = ft_putnbr(n / 10);
		if (content == -1)
			return (-1);
		len += content;
	}
	if (ft_putchar((n % 10) + '0') == -1)
		return (-1);
	len ++;
	return (len);
}
