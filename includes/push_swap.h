/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:47:33 by icarboni          #+#    #+#             */
/*   Updated: 2023/10/25 17:45:30 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"
# include "../libft/includes/ft_printf.h"

typedef struct s_stacks
{
	int	*stack_a;
	int	*stack_b;
	int	size_a;
	int	size_b;
	int	total_size;
}	t_stacks;

/*    --    operations_s.c    --    */
void	sa(t_stacks *l);
void	sb(t_stacks *l);
void	ss(t_stacks *l);

/*    --    operations_p.c    --    */
void	pa(t_stacks *l);
void	pb(t_stacks *l);

/*    --    operations_r.c    --    */
void	ra(t_stacks *l);
void	rb(t_stacks *l);
void	rr(t_stacks *l);

/*    --    operations_rr.c    --    */
void	rra(t_stacks *l);
void	rrb(t_stacks *l);
void	rrr(t_stacks *l);

/*    --    push_swap.c    --    */
void	list_stacks_one_argc(char **argv, t_stacks *list);
void	list_stacks(int argc, char **argv, t_stacks *list);
int		ft_size_stack(char *argv);
int		*split_argv(char *input, int size);
char	*ft_clean_input(char *input);

/*    --    print_stacks.c    --    */
void	ft_print_stacks(t_stacks *l);
void	ft_print_stack_c(int *stack_c);

/*    --    normalize.c    --    */
void	ft_swap(int *i, int *j);
void	ft_bubble_sort(t_stacks *l);
void	ft_normalize(t_stacks *l, int *stack_c);
void	ft_copy_stack(t_stacks *l, int *stack_c, int *tmp);

/*    --    sorting.c    --    */
void	ft_sort(t_stacks *l);
void	ft_sorting_two(t_stacks *l);
void	ft_sorting_three(t_stacks *l);
void	ft_sorting_four(t_stacks *l);
void	ft_sorting_five(t_stacks *l);

/*    --    algorithm.c    --    */
int		ft_is_sorted(t_stacks *l);
void	ft_radix(t_stacks *l);

/*    --    check_errors.c    --    */
void	ft_error(void);
int		check_dup(t_stacks *l);
int		check_number(char *stack);
int		ft_check_is_int(char *input);

#endif