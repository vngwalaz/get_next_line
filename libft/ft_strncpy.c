/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 09:41:16 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/06/10 11:13:58 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, size_t n)
{
	size_t counter;

	counter = 0;
	while (counter < n)
	{
		dest[counter] = src[counter];
		counter++;
	}
	while (src[counter] && dest[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	return (dest);
}
