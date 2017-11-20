/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 15:48:41 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/06/08 15:49:01 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;

	i = 0;
	if (!s1 && !s2)
		return (1);
	if (!s1[i] || !s2[i])
		return (0);
	while (s1[i] && s2[i] && i < n)
	{
		printf("i: %d\ts1[i]: %c\ts2[i]: %c\n", i, s1[i], s2[i]);
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}