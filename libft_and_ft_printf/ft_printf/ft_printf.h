/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamadou <idamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 04:43:49 by idamadou          #+#    #+#             */
/*   Updated: 2025/11/11 06:01:02 by idamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(FT_PRINTF_H)
# define FT_PRINTF_H

# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_put_ptr(void *ptr);
int	ft_put_uns_nbr(unsigned int n);
int	ft_putnbr_base_hex(unsigned int n, int uppercase);
int	ft_putnbr(int nb);
int	ft_putstr(char *str);
int	ft_putchar(int c);

#endif
