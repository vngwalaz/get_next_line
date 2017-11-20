/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 13:39:51 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/06/08 13:51:43 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	int		i;
	int		len;
	size_t	len_2;

	i = 0;
	len = 0;
	len_2 = 0;
	while (dest[len])
		len++;
	while (src[i] && i < (size - len - 1))
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	while (dest[len_2])
		len_2++;
	len_2++;
	return (len_2);
}
