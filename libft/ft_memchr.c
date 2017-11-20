/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 12:35:22 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/06/14 10:08:32 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			len;
	unsigned char	*src;

	len = 0;
	src = (unsigned char *)str;
	while (len < n)
	{
		if (src[len] == c)
		{
			return (src);
		}
		len++;
	}
	return (0);
}
