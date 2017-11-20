/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 14:30:45 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/06/11 14:38:52 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_pow(int nb, int pow)
{
	if (pow == 0)
		return (1);
	else
		return (nb * ft_pow(nb, pow - 1));
}

char	*ft_itoa(int n)
{
	int		i;
	char	*nbr;
	int		neg;

	i = 1;
	neg = 0;
	if (n < 0)
	{
		neg = 1;
		n = n * -1;
	}
	nbr = (char*)malloc(sizeof(nbr) * i);
	nbr[i + neg] = '\0';
	while (i-- > 0)
	{
		nbr[i + neg] = (n % base) + (n % base > 9 ? 'A' - 10 : '0');
		n = n / base;
	}
	if (neg)
		nbr[0] = '-';
	return (nbr);
}
