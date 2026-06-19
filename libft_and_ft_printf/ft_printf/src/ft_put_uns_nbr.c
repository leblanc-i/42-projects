/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uns_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamadou <idamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 01:33:59 by idamadou          #+#    #+#             */
/*   Updated: 2025/11/11 22:40:10 by idamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_put_uns_nbr.h"
#include "ft_putchar.h"

int	ft_put_uns_nbr(unsigned int n)
{
	int	len;
	int	content;

	len = 0;
	if (n >= 10)
	{
		content = ft_put_uns_nbr(n / 10);
		if (content == -1)
			return (-1);
		len += content;
	}
	if (ft_putchar((n % 10) + '0') == -1)
		return (-1);
	len ++;
	return (len);
}
