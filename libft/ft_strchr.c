/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 10:16:18 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/06/09 14:58:06 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int len;

	len = 0;
	while ((char)str[len] != c)
		len++;
	if ((char)str[len] == c)
		return ((char *)&str[len]);
	else
		return (NULL);
}
