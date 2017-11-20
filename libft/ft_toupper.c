/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 09:38:51 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/06/09 15:15:02 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_toupper(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (!(str[counter] >= 'A' && str[counter] <= 'Z'))
			counter++;
		if (!(str[counter] >= 'a' && str[counter] <= 'z'))
			counter++;
		if (str[counter] >= 'a' && str[counter] <= 'z')
			str[counter] = str[counter] - 32;
		else
			counter++;
	}
	return (str);
}
