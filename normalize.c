/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:50:40 by icarboni          #+#    #+#             */
/*   Updated: 2023/10/24 14:27:45 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	ft_swap(int *i, int *j)
{
	int	aux;

	aux = *i;
	*i = *j;
	*j = aux;
}

void	ft_bubble_sort(t_stacks *l)
{
	int	*stack_c;
	int	i;
	int	j;

	i = 0;
	stack_c = malloc(sizeof(int) * l -> total_size);
	while (i < l -> total_size)
	{
		stack_c[i] = l -> stack_a[i];
		i++;
	}
	i = 0;
	while (i < l -> total_size - 1)
	{
		j = 0;
		while (j < l -> total_size - 1)
		{
			if (stack_c[j] > stack_c[j + 1])
				ft_swap(&stack_c[j], &stack_c[j + 1]);
			j++;
		}
		i++;
	}
	ft_normalize(l, stack_c);
}

void	ft_normalize(t_stacks *l, int *stack_c)
{
	int	*tmp;

	tmp = malloc(sizeof(int) * l -> total_size);
	ft_copy_stack(l, stack_c, tmp);
	free (stack_c);
	free(l -> stack_a);
	l -> stack_a = tmp;
}

// void	ft_sort_bubble(int *temp, t_stacks *data)
// {
// 	int	temp_swap;
// 	int	i;
// 	int	j;

// 	j = 0;
// 	while (j < data->total_size)
// 	{
// 		i = 0;
// 		while (i < data->total_size - 1)
// 		{
// 			if (temp[i] > temp[i + 1])
// 			{
// 				temp_swap = temp[i];
// 				temp[i] = temp[i + 1];
// 				temp[i + 1] = temp_swap;
// 			}
// 			i++;
// 		}
// 		j++;
// 	}
// }

// void	ft_normalize(t_stacks *data)
// {
// 	int	*temp;
// 	int	*temp2;

// 	temp = malloc(sizeof(int) * data->total_size);
// 	ft_memcpy(temp, data->stack_a, sizeof(int) * data->total_size);
// 	ft_sort_bubble(temp, data);
// 	temp2 = malloc(sizeof(int) * data->total_size);
// 	ft_copy_stack(data, temp, temp2);
// 	free(data->stack_a);
// 	data->stack_a = temp2;
// 	free(temp);
// }

void	ft_copy_stack(t_stacks *l, int *stack_c, int *tmp)
{
	int	i;
	int	j;

	i = 0;
	while (i < l -> size_a)
	{
		j = 0;
		while (j < l -> size_a)
		{
			if (stack_c[i] == l -> stack_a[j])
				tmp[j] = i + 1;
			j++;
		}
		i++;
	}
}
