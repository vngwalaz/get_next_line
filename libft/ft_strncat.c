/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 13:52:59 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/06/09 15:00:11 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const *src, size_t n)
{
	int len;
	int counter;

	len = 0;
	counter = 0;
	while (dest[len])
		len++;
	while (src[counter] && counter < n)
	{
		dest[len + counter] = src[counter];
		counter++;
	}
	dest[len + counter] = '\0';
	return dest;
}
