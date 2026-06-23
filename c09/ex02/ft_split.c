/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falamlih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 21:22:45 by falamlih          #+#    #+#             */
/*   Updated: 2025/09/02 20:22:42 by falamlih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	charse(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count(char *str, char *sep)
{
	int	i;
	int	count;
	int	word;

	i = 0;
	count = 0;
	word = 0;
	while (str[i])
	{
		if (!charse(sep, str[i]) && !word)
		{
			count++;
			word = 1;
		}
		else if (charse(sep, str[i]))
			word = 0;
		i++;
	}
	return (count);
}

void	ft_arr(char **arr, int h, char *str, int len)
{
	int	s;

	arr[h] = (char *)malloc(sizeof(char) * (len + 1));
	if (!arr[h])
		return ;
	s = 0;
	while (s < len)
	{
		arr[h][s] = str[s];
		s++;
	}
	arr[h][s] = '\0';
}

char	**ft(char *str, char *charset, int l, int h)
{
	int		i;
	int		j;
	char	**arr;

	arr = (char **)malloc(sizeof(char *) * (l + 1));
	if (!arr)
		return (NULL);
	i = 0;
	h = 0;
	while (str[i])
	{
		j = 0;
		while (!charse(charset, str[i]) && str[i])
		{
			j++;
			i++;
		}
		if (j > 0)
			ft_arr(arr, h++, (str + i - j), j);
		if (charse(charset, str[i]))
			i++;
	}
	arr[h] = NULL;
	return (arr);
}

char	**ft_split(char *str, char *charset)
{
	int		l;
	int		h;

	h = 0;
	l = count(str, charset);
	return (ft(str, charset, l, h));
}
