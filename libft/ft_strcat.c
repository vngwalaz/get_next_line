/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 13:04:25 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/06/03 13:52:01 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *str1, const char *str2)
{
	int len_a;
	int len_b;

	len_a = 0;
	len_b = 0;
	len_b = ft_strlen(str1);
	while (str2[len_a])
	{
		str1[len_a + len_b] = str2[len_a];
		len_a++;
	}
	str1[len_b + len_a] = '\0';
	return (str1);
}
