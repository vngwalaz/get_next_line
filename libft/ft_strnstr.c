/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 12:47:32 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/06/10 12:49:35 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (little[i] == '\0')
		return ((char*)big);
	while (i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] != '\0')
		{
			j++;
			if (little[j] == '\0')
				return ((char*)(big + i));
		}
		i++;
	}
	return (NULL);
}
