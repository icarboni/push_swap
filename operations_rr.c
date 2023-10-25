/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:20:03 by icarboni          #+#    #+#             */
/*   Updated: 2023/10/24 14:27:45 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	rra(t_stacks *l)
{
	int	i;
	int	save;

	i = l -> size_a - 1;
	save = l -> stack_a[l -> size_a - 1];
	while (i--)
	{
		l -> stack_a[i + 1] = l -> stack_a[i];
	}
	l -> stack_a[0] = save;
	ft_printf("rra\n");
}

void	rrb(t_stacks *l)
{
	int	i;
	int	save;

	i = l -> size_b - 1;
	save = l -> stack_b[l -> size_b - 1];
	while (i--)
	{
		l -> stack_b[i + 1] = l -> stack_b[i];
	}
	l -> stack_b[0] = save;
	ft_printf("rrb\n");
}

void	rrr(t_stacks *l)
{
	rra(l);
	rrb(l);
}
