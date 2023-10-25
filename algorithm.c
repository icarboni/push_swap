/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:38:24 by icarboni          #+#    #+#             */
/*   Updated: 2023/10/25 19:13:49 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	ft_is_sorted(t_stacks *l)
{
	int	i;

	i = 0;
	while (i < l -> total_size - 1)
	{
		if (l -> stack_a[i] > l -> stack_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	ft_radix(t_stacks *l)
{
	int			i;
	uint32_t	mask;

	i = 0;
	mask = 0b1;
	while (!ft_is_sorted(l))
	{
		while (i < l -> total_size)
		{
			if (!(l -> stack_a[0] & mask))
				pb(l);
			else if (l -> size_a > 1)
				ra(l);
			i++;
		}
		while (l -> size_b)
			pa(l);
		i = 0;
		mask <<= 1;
	}
}
