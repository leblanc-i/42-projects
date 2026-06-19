/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamadou <idamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 03:07:40 by idamadou          #+#    #+#             */
/*   Updated: 2025/11/12 14:25:00 by idamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	specifier(char c, va_list *ap)
{
	if (c == 'c')
		return (ft_putchar((char)va_arg(*ap, int)));
	if (c == 's')
		return (ft_putstr(va_arg(*ap, char *)));
	if (c == 'p')
		return (ft_put_ptr(va_arg(*ap, void *)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(*ap, int)));
	if (c == 'u')
		return (ft_put_uns_nbr(va_arg(*ap, unsigned int)));
	if (c == 'x')
		return (ft_putnbr_base_hex(va_arg(*ap, unsigned int), 0));
	if (c == 'X')
		return (ft_putnbr_base_hex(va_arg(*ap, unsigned int), 1));
	if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	print_first(const char *format, va_list *ap)
{
	int	i;
	int	len;
	int	content;

	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			content = specifier(format[i + 1], ap);
			if (content == -1)
				return (-1);
			len += content;
			i++;
		}
		else
		{
			if (ft_putchar(format[i]) == -1)
				return (-1);
			len++;
		}
		i++;
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		result;

	if (!format)
		return (-1);
	va_start(ap, format);
	result = print_first(format, &ap);
	va_end(ap);
	return (result);
}
