/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:30:09 by icarboni          #+#    #+#             */
/*   Updated: 2022/11/10 18:56:26 by icarboni         ###   ########.fr       */
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

void	ft_add_numbers(t_list **a, int argc, char **argv)
{
	t_list	*l;
	int		i;
	int		*num;

	i = 2;
	//CONTROLLARE IL MALLOC
	//l = (t_list *)malloc(sizeof(t_list));
		num = (int *)malloc(sizeof(int));
		*num = ft_atoi(argv[1]);
		l = ft_lstnew((void *) num);
		//l->content = (void *) num;
		//l->next = NULL;
		a = &l;
		while (i < argc)
		{
			num = (int *)malloc(sizeof(int));
			*num = ft_atoi(argv[i]);
			l = ft_lstnew((void *) num);
			ft_lstadd_back(a, l);
			i++;
		}

}

void ft_print_list(t_list **lst)
{
	while (*lst != NULL)
	{
		printf("%d ", *((int *)(*lst)->content));
		(*lst) = (*lst)->next;
	}
}

int	main(int argc, char **argv)
{
	t_list	**a;
	t_list	**b;

	if (!ft_check_params(argc, argv))
		ft_printf("Error");
	else
	{
		a = NULL;
		ft_add_numbers(a, argc, argv);
		b = NULL;
		ft_print_list(a);
		
		//ft_order_list(a, b);
	}
	return (0);
}
