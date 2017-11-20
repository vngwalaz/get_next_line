/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 10:32:17 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/06/09 15:16:04 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t len)
{
	int					len_2;
	const unsigned char	*str1;
	const unsigned char	*str2;

	len_2 = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (s1[len_2] < s2[len])
	{
		if (str1[len_2] != str2[len_2])
		{
			return (str1[len_2] - str2[len_2]);
		}
		else
			len_2++;
	}
	return (0);
}
