/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 15:43:37 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/06/08 15:44:07 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = 0;
	if (!s1 && !s2)
		return (1);
	if (!s1[i] || !s2[i])
		return (0);
	while (s1[i])
	{
		printf("i: %d\ts1[i]: %c\ts2[i]: %c\n", i, s1[i], s2[i]);
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}