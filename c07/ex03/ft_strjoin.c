/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falamlih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 21:14:54 by falamlih          #+#    #+#             */
/*   Updated: 2025/08/26 10:17:02 by falamlih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

int	len(char **strs, int size, char *sep)
{
	int	i;
	int	n;
	int	l;
	int	j;

	i = 0;
	n = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			n++;
		}
		i++;
	}
	l = ft_strlen(sep) * (size - 1);
	return (n + l);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;

	if (size == 0)
	{
		res = malloc(1);
		if (res)
			res[0] = '\0';
		return (res);
	}
	res = (char *)malloc(sizeof(char) * (len(strs, size, sep) + 1));
	if (!res)
		return (NULL);
	i = 0;
	res[0] = '\0';
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i != size - 1)
			ft_strcat(res, sep);
		i++;
	}
	return (res);
}
