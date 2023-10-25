/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:41:55 by icarboni          #+#    #+#             */
/*   Updated: 2023/10/24 12:58:53 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_check_set(char c, char const *set)
{
	int		d;

	d = 0;
	while (set[d])
	{
		if (c == set[d])
			return (1);
		d++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		c;
	int		d;

	i = 0;
	c = 0;
	d = ft_strlen(s1);
	while (s1[c] && ft_check_set(s1[c], set) == 1)
		c++;
	while (d > c && ft_check_set(s1[d - 1], set) == 1)
		d--;
	str = malloc(sizeof(char) * (d - c + 1));
	if (str == NULL)
		return (NULL);
	while (c < d)
		str[i++] = s1[c++];
	str[i] = '\0';
	return (str);
}
