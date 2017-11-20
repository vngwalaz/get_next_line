/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 09:34:46 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/06/09 15:01:49 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int counter;
	int counter_2;
	int count;

	counter = 0;
	count = 0;
	while (to_find[count] != '\0')
		count++;
	if (count == 0)
		return (str);
	while (str[counter] != '\0')
	{
		counter_2 = 0;
		while (str[counter + counter_2] == to_find[counter_2])
		{
			if (count - 1 == counter_2)
				return (str + counter);
			counter_2++;
		}
		counter++;
	}
	return (NULL);
}
