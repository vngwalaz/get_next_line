/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 15:28:22 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/06/14 10:08:40 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str_b, int byts_src, size_t len)
{
	int		len_2;

	len_2 = 0;
	while (len > 0)
	{
		*(unsigned char *)str_b = byts_src;
		len--;
		len_2++;
	}
	return (str_b);
}
