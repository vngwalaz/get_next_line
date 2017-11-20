/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 15:41:34 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/06/08 15:41:52 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnew(size_t size)
{
	char *str;
	int i;
	str = (char*)malloc(size);
	i = 0;
	printf("Address of str: %s\n", &str);
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}