/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 15:42:50 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/06/10 11:11:25 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*file;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	file = (char *)malloc(sizeof(*file) * len + 1);
	if (src == NULL)
		return (0);
	while (src[i] != '\0')
	{
		file[i] = src[i];
		i++;
	}
	return (file);
}
