/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:18:32 by icarboni          #+#    #+#             */
/*   Updated: 2023/10/24 14:27:45 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	pa(t_stacks *l)
{
	int	i;

	i = l -> size_a;
	if (l -> size_b)
	{
		l -> size_a = l -> size_a + 1;
		while (i--)
			l -> stack_a[i + 1] = l -> stack_a[i];
		l -> stack_a[0] = l -> stack_b[0];
		i = 0;
		while (i < l -> size_b)
		{
			l -> stack_b[i] = l -> stack_b[i + 1];
			i++;
		}
		l -> size_b = l -> size_b - 1;
		ft_printf("pa\n");
	}
}

void	pb(t_stacks *l)
{
	int	i;

	i = l -> size_b;
	if (l -> size_a)
	{
		l -> size_b = l -> size_b + 1;
		while (i--)
			l -> stack_b[i + 1] = l -> stack_b[i];
		l -> stack_b[0] = l -> stack_a[0];
		i = 0;
		while (i < l -> size_a)
		{
			l -> stack_a[i] = l -> stack_a[i + 1];
			i++;
		}
		l -> size_a = l -> size_a - 1;
		ft_printf("pb\n");
	}
}
