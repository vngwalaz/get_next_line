/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 15:45:01 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/06/08 15:45:18 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len_c_stop(const char *str, int start, char c)
{
	size_t		counter;

	if (!str)
		return (0);
	counter = 0;
	while (str[start] && (str[start] != c))
	{
		start++;
		counter++;
	}
	return (counter);
}

static int	ft_split_count(char const *s, char c)
{
	int		flag;
	int		words;
	int		counter;
	char	*str;

	str = (char *)s;
	counter = 0;
	words = 0;
	while (str[counter])
	{
		flag = 0;
		while ((str[counter] != c) && str[counter + 1])
		{
			if (flag == 0)
			{
				flag = 1;
				words++;
			}
			counter++;
		}
		counter++;
	}
	return (words);
}

static char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;
	int i;
	int size;

	str = (char *)malloc(len + 1);
	i = 0;
	size = 0;
	while (s[size])
		size++;
	if (start + len < size)
	{
		while (i < len)
		{
			str[i] = s[start + i];
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	else return (NULL);
}

char	**ft_strsplit(char const *s, char c)
{
	int words;
	int i;
	int counter;
	char **arr;
	char *str;

	i = 0;
	counter = 0;
	str = (char *)s;
	if (!str)
		return (NULL);
	words = ft_split_count(s, c);
	arr = (char**)malloc(words);
	while (i < words)
	{
		while ((str[counter] == c) && str[counter])
			counter++;
		arr[i] = ft_strsub(str, counter, ft_len_c_stop(str, counter, c));
		while ((str[counter] != c) && str[counter])
			counter++;
		i++;
	}
	printf("I is:%d\n", i);
	i = 0;
	while (i < words)
	{
		printf("i: %d\tarr[i]: %s\n", i, arr[i]);
		i++;
	}
	return (arr);
}