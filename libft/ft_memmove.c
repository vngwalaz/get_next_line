/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 13:49:40 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/06/10 10:28:23 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*dest_ptr;
	char	*src_ptr;
	char	temp;
	size_t	len_2;

	dest_ptr = (char *)dest;
	src_ptr = (char *)src;
	len_2 = 0;
	if (src_ptr > dest_ptr)
	{
		len_2 = len - 1;
		while (len_2 > len)
		{
			temp = src_ptr[len_2];
			len_2++;
		}
	}
	len_2 = 0;
	while (len_2 < len)
	{
		dest_ptr[len_2] = temp;
		len_2++;
	}
	return (dest_ptr);
}
