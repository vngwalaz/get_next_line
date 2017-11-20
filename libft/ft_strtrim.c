/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 15:49:14 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/06/09 15:08:19 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s)
{
	char *str;
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
	}
	j = i;
	while (s[i] != ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
	}
	str = (char *)malloc(i - j);
	str = ft_strsub(s, j, i - j);
	return (str);
}
