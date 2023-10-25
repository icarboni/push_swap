/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:30:46 by icarboni          #+#    #+#             */
/*   Updated: 2023/10/24 12:58:53 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_atoi(const char *p)
{
	int	num;
	int	n;
	int	i;
	int	neg;

	neg = 1;
	num = 0;
	i = 0;
	while ((p[i] >= 9 && p[i] <= 13) || p[i] == 32)
		i++;
	if (p[i] == '-')
		neg = -1;
	if (p[i] == '-' || p[i] == '+')
		i++;
	if ((neg == -1) && !ft_strncmp("2147483648", p, 10))
		num = -2147483648;
	else
	{
		while (p[i] != '\0' && (p[i] >= '0' && p[i] <= '9'))
		{
			n = p[i++] - 48;
			num = (num * 10) + n;
		}
	}
	return (num * neg);
}
