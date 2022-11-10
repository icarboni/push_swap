/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:45:46 by icarboni          #+#    #+#             */
/*   Updated: 2022/11/10 20:58:18 by icarboni         ###   ########.fr       */
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

int		main(int argc, char **argv);
int		ft_check_params(int argc, char **argv);
void	ft_order_list(t_list **a, t_list **b);

#endif