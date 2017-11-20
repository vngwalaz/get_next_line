/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 09:31:02 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/06/09 14:59:27 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(char *str1, char *str2)
{
	int counter;

	counter = 0;
	while ((str1[counter] != '\0') && (str2[counter] != '\0'))
	{
		if (str1[counter] >= str2[counter])
			return (str1[counter] - str2[counter]);
		else if (str1[counter] <= str2[counter])
			return (str1[counter] - str2[counter]);
		else
			counter++;
	}
	return (0);
}
