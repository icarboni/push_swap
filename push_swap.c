/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:30:09 by icarboni          #+#    #+#             */
/*   Updated: 2022/11/29 19:53:56 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	ft_add_numbers_a(t_stack **s, int argc, char **argv)
{
	int		i;
	int		*ordered;

	i = 0;
	while (i < (argc - 1))
	{
		s[i] = (t_stack *)malloc(sizeof(t_stack));
		i++;
	}
	s[i] = NULL;
	i = -1;
	ordered = (int *) malloc(argc * sizeof(int));
	while (++i < (argc - 1))
		ordered[i] = ft_atoi(argv[i + 1]);
	i = 0;
	ft_sort_int_tab(ordered, argc);
	while (i < (argc - 1))
	{
		s[i]->num = ft_atoi(argv[i + 1]);
		s[i]->pos = ft_find_position(ordered, argc, s[i]->num);
		i++;
	}
	free(ordered);
}

void	ft_create_stack(t_stack **s, int argc)
{
	int		i;

	i = 0;
	while (i < (argc - 1))
	{
		s[i] = NULL;
		i++;
	}
	s[i] = NULL;
}

int	main(int argc, char **argv)
{
	t_stack	**a;
	t_stack	**b;

	if (!ft_check_params(argc, argv))
		ft_printf("Error");
	else
	{
		a = (t_stack **)malloc(sizeof(t_stack *) * (argc));
		b = (t_stack **)malloc(sizeof(t_stack *) * (argc));
		ft_create_stack(a, argc);
		ft_create_stack(b, argc);
		ft_add_numbers_a(a, argc, argv);
		ft_print_stack(a);
		printf("\n");
		ft_swap_(a);
		ft_print_stack(a);
		printf("\n");
		ft_push_(a, b);
		ft_print_stack(a);
	}
	return (0);
}
