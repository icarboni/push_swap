/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:45:46 by icarboni          #+#    #+#             */
/*   Updated: 2022/11/29 19:53:31 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

typedef struct s_stack
{
	int		num;
	int		pos;
	int		mov;
}	t_stack;

// push_swap.c
int		main(int argc, char **argv);
void	ft_create_stack(t_stack **s, int argc);
void	ft_add_numbers(t_stack **s, int argc, char **argv);

// utils.c
int		ft_check_params(int argc, char **argv);
int		ft_number_elements(t_stack **s);
int		ft_find_position(int *tab, int size, int n);
void	ft_swap(int *tab, int c1, int min, int index);
void	ft_sort_int_tab(int *tab, int size);

// stack_utils.c
void	ft_print_stack(t_stack **s);
void	ft_swap_(t_stack **s);
void	ft_push_(t_stack **s1, t_stack **s2);

#endif