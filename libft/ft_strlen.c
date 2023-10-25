/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:55:43 by icarboni          #+#    #+#             */
/*   Updated: 2023/10/24 13:00:50 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_strlen(const char *str)
{
	int					c;
	unsigned char		*str2;

	str2 = (unsigned char *) str;
	c = 0;
	while (str2[c] != '\0')
		c++;
	return (c);
}
