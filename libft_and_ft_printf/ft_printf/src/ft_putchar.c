/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamadou <idamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 01:38:18 by idamadou          #+#    #+#             */
/*   Updated: 2025/11/11 21:38:29 by idamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.h"

int	ft_putchar(int c)
{
	unsigned char	cr;

	cr = (unsigned char)c;
	if (write(1, &cr, 1) == -1)
		return (-1);
	return (1);
}
