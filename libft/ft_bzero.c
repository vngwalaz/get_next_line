/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 16:23:16 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/06/03 14:08:03 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t len)
{
	size_t			len_2;
	unsigned char	*ptr;

	len_2 = 0;
	ptr = str;
	while (len_2 < len)
	{
		ptr[len_2] = '\0';
		len_2++;
	}
}
