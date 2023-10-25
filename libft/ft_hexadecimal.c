/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:27:19 by icarboni          #+#    #+#             */
/*   Updated: 2023/10/24 11:38:17 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_hexadecimal_low(unsigned	int n)
{
	int		res;
	int		div;
	int		mod;

	div = n / 16;
	mod = n % 16;
	res = 0;
	if (div != 0)
		res = ft_hexadecimal_low(div);
	if (mod < 0)
		mod = -mod;
	write(1, &"0123456789abcdef"[mod], 1);
	return (res + 1);
}

int	ft_hexadecimal_up(unsigned	int n)
{
	int		res;
	int		div;
	int		mod;

	div = n / 16;
	mod = n % 16;
	res = 0;
	if (div != 0)
		res = ft_hexadecimal_up(div);
	if (mod < 0)
		mod = -mod;
	write(1, &"0123456789ABCDEF"[mod], 1);
	return (res + 1);
}

int	ft_hexadecimal_low_ptr(unsigned long int n)
{
	int					res;
	unsigned long int	div;
	unsigned long int	mod;

	div = n / 16;
	mod = n % 16;
	res = 0;
	if (div != 0)
		res = ft_hexadecimal_low_ptr(div);
	if (mod < 0)
		mod = -mod;
	write(1, &"0123456789abcdef"[mod], 1);
	return (res + 1);
}

int	ft_putptr(void *ptr)
{
	unsigned long int	p;

	p = (unsigned long int) ptr;
	write(1, "0x", 2);
	return (ft_hexadecimal_low_ptr(p) + 2);
}
