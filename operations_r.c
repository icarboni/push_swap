/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_r.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:19:11 by icarboni          #+#    #+#             */
/*   Updated: 2023/10/24 14:27:45 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	ra(t_stacks *l)
{
	int	i;
	int	save;

	i = 0;
	save = l -> stack_a[0];
	while (i < l -> size_a - 1)
	{
		l -> stack_a[i] = l -> stack_a[i + 1];
		i++;
	}
	l -> stack_a[i] = save;
	ft_printf("ra\n");
}

void	rb(t_stacks *l)
{
	int	i;
	int	save;

	i = 0;
	save = l -> stack_b[0];
	while (i < l -> size_b - 1)
	{
		l -> stack_b[i] = l -> stack_b[i + 1];
		i++;
	}
	l -> stack_b[i] = save;
	ft_printf("rb\n");
}

void	rr(t_stacks *l)
{
	ra(l);
	rb(l);
}
