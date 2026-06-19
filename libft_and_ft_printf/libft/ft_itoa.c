/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamadou <idamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 18:52:46 by idamadou          #+#    #+#             */
/*   Updated: 2025/11/04 06:10:36 by idamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nb_dig(int n)
{
	int		i;
	long	nb;

	i = 0;
	nb = n;
	if (n <= 0)
	{
		i = 1;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	long	nb;
	char	*result;

	nb = n;
	if (nb < 0)
		nb = -nb;
	len = nb_dig(n);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	while (len > 0)
	{
		result[len - 1] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}
