/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:22:19 by icarboni          #+#    #+#             */
/*   Updated: 2023/10/25 19:13:27 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	*list;

	list = malloc(sizeof(t_stacks));
	if (!argv[1])
		return (0);
	if (argc == 2)
		list_stacks_one_argc(argv, list);
	else
		list_stacks(argc, argv, list);
	if (check_dup(list) == 0)
		ft_error();
	list -> total_size = list -> size_a;
	if (ft_is_sorted(list) == 1)
	{
		ft_free_stacks(list);
		return (0);
	}
	ft_bubble_sort(list);
	ft_sort(list);
	ft_free_stacks(list);
}

void	list_stacks_one_argc(char **argv, t_stacks *list)
{
	int		i;
	int		size;
	char	*clean_input;

	i = 0;
	list -> size_a = ft_size_stack(argv[1]);
	list -> stack_a = split_argv(argv[1], list->size_a);
	list -> stack_b = ft_calloc(list->size_a, sizeof(int));
	list -> size_b = 0;
}

void	list_stacks(int argc, char **argv, t_stacks *list)
{
	int	i;

	list -> stack_a = (int *) malloc((argc - 1) * sizeof(int));
	list -> stack_b = (int *) malloc((argc - 1) * sizeof(int));
	list -> size_a = argc - 1;
	list -> size_b = 0;
	i = 1;
	while (argv[i])
	{
		list->stack_b[0] = 0;
		if (check_number(argv[i]) == 0 || ft_check_is_int(argv[i]))
			ft_error();
		list -> stack_a[i - 1] = ft_atoi(argv[i]);
		i++;
	}
}

int	ft_size_stack(char *argv)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (argv[i])
	{
		while (argv[i] != ' ' && argv[i])
			i++;
		while (argv[i] == ' ')
			i++;
		size++;
	}
	return (size);
}

void	ft_free_stacks(t_stacks *list)
{
	free(list->stack_a);
	free(list->stack_b);
	free(list);
}
