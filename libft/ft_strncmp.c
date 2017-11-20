/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 09:36:24 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/06/07 12:57:45 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char *str1, char *str2, unsigned int n)
{
	int counter;

	counter = 0;
	while (str1[counter] && str2[counter] <= n)
	{
		if (str1[counter] < str2[counter])
			return (str1[counter] - str2[counter]);
		else if (str1[counter] > str2[counter])
			return (str1[counter] - str2[counter]);
		else
			counter++;
	}
	return (0);
}
