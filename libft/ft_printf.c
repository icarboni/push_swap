/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:12:30 by icarboni          #+#    #+#             */
/*   Updated: 2023/10/24 11:38:17 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_what(char txt, va_list list)
{
	int	res;

	res = 0;
	if (txt == '%')
		res += ft_putchar('%');
	else if (txt == 'c')
		res += ft_putchar(va_arg(list, int));
	else if (txt == 's')
		res += ft_putstr(va_arg(list, char *));
	else if (txt == 'p')
		res += ft_putptr(va_arg(list, void *));
	else if (txt == 'd')
		res += ft_putnbr(va_arg(list, int));
	else if (txt == 'i')
		res += ft_putnbr(va_arg(list, int));
	else if (txt == 'u')
		res += ft_uputnbr(va_arg(list, int));
	else if (txt == 'x')
		res += ft_hexadecimal_low(va_arg(list, unsigned int));
	else if (txt == 'X')
		res += ft_hexadecimal_up(va_arg(list, unsigned int));
	return (res);
}

int	ft_printf(const char *txt, ...)
{
	va_list		list;
	int			i;
	int			res;

	i = 0;
	res = 0;
	va_start(list, txt);
	while (txt[i] != '\0')
	{
		if (txt[i] != '%')
			res += ft_putchar(txt[i]);
		else
		{
			i++;
			res += ft_what(txt[i], list);
		}
		i++;
	}
	va_end(list);
	return (res);
}
