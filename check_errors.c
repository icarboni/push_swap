/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:10:34 by icarboni          #+#    #+#             */
/*   Updated: 2023/10/25 17:47:12 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	ft_error(void)
{
	ft_printf("Error\n");
	exit (0);
}

int	check_dup(t_stacks *l)
{
	int	i;
	int	j;

	i = 0;
	while (i < l->size_a)
	{
		j = i + 1;
		while (j < (l->size_a))
		{
			if (l->stack_a[i] == l->stack_a[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_number(char *stack)
{
	int	i;

	i = 0;
	if (stack[i] == '-' || stack[i] == '+')
			i++;
	while (stack[i])
	{
		if (ft_isdigit(stack[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_is_int(char *input)
{
	long	num;
	int		n;
	int		i;
	int		neg;

	neg = 1;
	num = 0;
	i = 0;
	if (input[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (input[i] != '\0' && (input[i] >= '0' && input[i] <= '9'))
	{
		n = input[i++] - 48;
		num = (num * 10) + n;
	}
	if ((neg == -1 && num > 2147483648) || (neg == 1 && num > 2147483647))
		return (1);
	else
		return (0);
}

int	*split_argv(char *input, int size)
{
	char	**split;
	int		*stack;
	int		i;

	split = ft_split(input, ' ');
	i = 0;
	stack = ft_calloc(size, sizeof(int));
	while (split[i])
	{
		if (check_number(split[i]) == 0 || ft_check_is_int(split[i]))
			ft_error();
		stack[i] = ft_atoi(split[i]);
		free(split[i]);
		i++;
	}
	free(split);
	return (stack);
}
