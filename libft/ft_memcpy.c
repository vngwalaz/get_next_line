/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 13:31:13 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/06/10 10:08:40 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest_ptr;
	char	*src_ptr;
	size_t	counter;

	dest_ptr = (char *)dest;
	src_ptr = (char *)src;
	counter = 0;
	while (counter < n)
	{
		dest_ptr[counter] = src_ptr[counter];
		counter++;
	}
	return (dest_ptr);
}
