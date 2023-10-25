/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:23:59 by icarboni          #+#    #+#             */
/*   Updated: 2023/10/24 14:27:45 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	ft_sort(t_stacks *l)
{
	if (l -> size_a == 2)
		ft_sorting_two(l);
	if (l -> size_a == 3)
		ft_sorting_three(l);
	if (l -> size_a == 4)
		ft_sorting_four(l);
	if (l -> size_a == 5)
		ft_sorting_five(l);
	if (l -> size_a > 5)
		ft_radix(l);
}

void	ft_sorting_two(t_stacks *l)
{
	if (l -> stack_a[0] > l -> stack_a[1])
		sa(l);
}

void	ft_sorting_three(t_stacks *l)
{
	if (l -> stack_a[0] > l -> stack_a[1] && l -> stack_a[1] < l -> stack_a[2]
		&& l -> stack_a[0] > l -> stack_a[2])
		ra(l);
	else if (l -> stack_a[0] < l -> stack_a[1]
		&& l -> stack_a[1] > l -> stack_a[2]
		&& l -> stack_a[0] < l -> stack_a[2])
	{
		rra(l);
		sa(l);
	}
	else if (l -> stack_a[0] < l -> stack_a[1]
		&& l -> stack_a[1] > l -> stack_a[2]
		&& l -> stack_a[0] > l -> stack_a[2])
		rra(l);
	else if (l -> stack_a[0] > l -> stack_a[1]
		&& l -> stack_a[1] > l -> stack_a[2])
	{
		ra(l);
		sa(l);
	}
	else if (l -> stack_a[0] > l -> stack_a[1]
		&& l -> stack_a[1] < l -> stack_a[2]
		&& l -> stack_a[0] < l -> stack_a[2])
		sa(l);
}

void	ft_sorting_four(t_stacks *l)
{
	if (l -> stack_a[1] == 4)
		ra(l);
	else if (l -> stack_a[2] == 4)
	{
		ra(l);
		ra(l);
	}
	else if (l -> stack_a[3] == 4)
		rra(l);
	pb(l);
	ft_sorting_three(l);
	pa(l);
	ra(l);
}

void	ft_sorting_five(t_stacks *l)
{
	if (l -> stack_a[0] == 5)
		pb(l);
    if (l -> stack_a[2] == 5)
		ra(l);
    if (l -> stack_a[2] == 5 || l -> stack_a[1] == 5)
	{
        ra(l);
        pb(l);
    }
    if (l -> stack_a[3] == 5)
		rra(l);
	if (l -> stack_a[3] == 5 || l -> stack_a[4] == 5)
	{
		rra(l);
		pb(l);
	}
	ft_sorting_four(l);
	pa(l);
	ra(l);
}
