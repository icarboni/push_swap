/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:19:24 by icarboni          #+#    #+#             */
/*   Updated: 2023/10/25 13:44:25 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	ft_print_stacks(t_stacks *l)
{
    int i;

    i = 0;
    ft_printf("STACK A: [ ");
	while (i < l->size_a)
        ft_printf("%d ", l->stack_a[i++]);
    ft_printf("]\n");
    i = 0;
    ft_printf("STACK B: [ ");
    while (i < l->size_a)
        ft_printf("%d ", l->stack_b[i++]);
    ft_printf("]\n");

}

void	ft_print_stack_c(int *stack_c)
{
	int i;

    i = 0;
    ft_printf("STACK C: [ ");
	while (stack_c[i++])
        ft_printf("%d ", stack_c[i]);
    ft_printf("]\n");
}
