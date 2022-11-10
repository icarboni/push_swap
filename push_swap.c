/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:30:09 by icarboni          #+#    #+#             */
/*   Updated: 2022/11/10 19:10:07 by icarboni         ###   ########.fr       */
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

void	ft_add_numbers(t_stack *a, int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		(a[i - 1]).index = i - 1;
		(a[i - 1]).num = ft_atoi(argv[i]);
		i++;
	}
}

void	ft_print_list(t_stack *s, int argc)
{
	int	i;

	i = 0;
	while (i < (argc - 1))
	{
		printf("%d: %d \n", s[i].index, s[i].num);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (!ft_check_params(argc, argv))
		ft_printf("Error");
	else
	{
		a = (t_stack *)malloc(sizeof(t_stack) * (argc - 1));
		ft_add_numbers(a, argc, argv);
		b = (t_stack *)malloc(sizeof(t_stack) * (argc - 1));
		ft_print_list(a, argc);
		//ft_order_list(a, b);
	}
	return (0);
}
