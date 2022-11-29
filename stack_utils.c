/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:45:25 by icarboni          #+#    #+#             */
/*   Updated: 2022/11/29 19:52:21 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	ft_print_stack(t_stack **s)
{
	int	i;

	i = 0;
	while (s[i] != NULL)
	{
		printf("num: %d		pos: %d\n", s[i]->num, s[i]->pos);
		i++;
	}
}

void	ft_swap_(t_stack **s)
{
	t_stack	*tmp;

	if (ft_number_elements(s) > 1)
	{
		tmp = s[0];
		s[0] = s[1];
		s[1] = tmp;
	}
}

void	ft_push_(t_stack **s1, t_stack **s2)
{
	int		i;
	int		num1;
	int		num2;

	i = 0;
	num1 = ft_number_elements(s1);
	num2 = ft_number_elements(s2);
	if (num2 == 0)
		s2[0] = s1[0];
	else
	{
		while (i < num2)
		{
			s2[i + 1] = s2[i];
			i++;
		}
		s2[0] = s1[0];
	}
	i = 1;
	while (i < num1)
	{
		s1[i - 1] = s1[i];
		i++;
	}
	s1[i - 1] = NULL;
}
