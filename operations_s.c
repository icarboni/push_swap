/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:20:40 by icarboni          #+#    #+#             */
/*   Updated: 2023/10/24 14:27:45 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	sa(t_stacks *l)
{
	int	n;

	if (l -> size_a)
	{
		n = l -> stack_a[1];
		l -> stack_a[1] = l -> stack_a[0];
		l -> stack_a[0] = n;
		ft_printf("sa\n");
	}
}

void	sb(t_stacks *l)
{
	int	n;

	if (l -> size_b)
	{
		n = l -> stack_b[1];
		l -> stack_b[1] = l -> stack_b[0];
		l -> stack_b[0] = n;
		ft_printf("sb\n");
	}
}

void	ss(t_stacks *l)
{
	sa(l);
	sb(l);
}
