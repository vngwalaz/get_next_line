/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 10:04:46 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/06/10 10:27:08 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	size_t			len_2;
	unsigned char	*str_ptr;
	unsigned char	*ptr;

	len_2 = 0;
	str_ptr = (unsigned char *)src;
	ptr = (unsigned char *)dest;
	while (len_2 < len && str_ptr[len_2 + 1] != c)
	{
		ptr[len_2] = str_ptr[len_2];
		len_2++;
	}
	return (dest);
}
