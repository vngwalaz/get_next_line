/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 13:03:41 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/06/16 13:14:47 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_isalpha(int c)
{
	if (((char)c >= 65) && ((char)c <= 90))
		return (1);
	else if (((char)c >= 97) && ((char)c <= 122))
		return (1);
	else
		return (0);
}

int		main(void)
{
	char str1 = 'a';
	char str2 = '2';

	printf("is it an alphabet: %d\n", ft_isalpha(str1));
	printf("is it an alphabet: %d\n", ft_isalpha(str2));
	return (0);
}
