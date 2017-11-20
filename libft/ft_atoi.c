/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 09:24:32 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/06/09 14:52:02 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int len;
	int sign;
	int result;

	len = 0;
	sign = 1;
	result = 0;
	while ((str[len] == '\n') || (str[len] == '\t') || (str[len] == ' ') ||
			(str[len] == '\r') || (str[len] == '\f') || (str[len] == '\v'))
		len++;
	if ((str[len] == '-') || (str[len] == '+'))
	{
		if (str[len] == '+')
			len++;
		else if (str[len] == '-')
			sign = -1;
		len++;
	}
	while ((str[len] >= '0') && (str[len] <= '9'))
	{
		result = ((result * 10) + (int)(str[len] - 48));
		len++;
	}
	return (sign * result);
}
