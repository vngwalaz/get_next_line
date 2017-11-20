/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 09:40:25 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/06/10 11:12:50 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	int counter;

	counter = 0;
	while (src[counter] && dest[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	return (dest);
}
