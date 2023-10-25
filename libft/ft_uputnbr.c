/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:08:53 by icarboni          #+#    #+#             */
/*   Updated: 2023/10/24 11:38:17 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_udigits_count(unsigned int n)
{
	int	c;

	c = 0;
	while (n > 9)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

int	ft_uexp(int d)
{
	unsigned int	c;

	c = 1;
	while (d > 0)
	{
		c = c * 10;
		d--;
	}
	return (c);
}

void	ft_ucount(int nb)
{
	int				d;
	unsigned int	e;
	int				t;

	d = ft_udigits_count(nb);
	while (d >= 0)
	{
		e = ft_uexp(d);
		t = nb / e;
		nb = nb - (e * t);
		ft_putchar(t + 48);
		d--;
	}
}

int	ft_uputnbr(unsigned int nb)
{
	if (nb == 0)
	{
		ft_putchar('0');
		return (1);
	}
	else
	{
		ft_ucount(nb);
		return (ft_udigits_count(nb) + 1);
	}
}
