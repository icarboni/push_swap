/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:41:07 by icarboni          #+#    #+#             */
/*   Updated: 2022/11/29 19:54:43 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int	ft_check_params(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc < 2)
		return (0);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_number_elements(t_stack **s)
{
	int	i;

	i = 0;
	while (s[i] != NULL)
		i++;
	return (i);
}

int	ft_find_position(int *tab, int size, int n)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (tab[i] == n)
			return (i);
		i++;
	}
	return (-1);
}

void	ft_swap(int *tab, int c1, int min, int index)
{
	int	s;

	s = *(tab + c1);
	*(tab + c1) = min;
	*(tab + index) = s;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	c1;
	int	c2;
	int	min;
	int	index;

	c1 = 0;
	c2 = 0;
	while (c1 < (size - 1))
	{	
		min = *(tab + c1);
		c2 = c1 + 1;
		while (c2 < size)
		{
			if (*(tab + c2) < min)
			{
				min = *(tab + c2);
				index = c2;
			}
			c2++;
		}
		if (min != *(tab + c1))
			ft_swap(tab, c1, min, index);
		c1++;
	}
}
