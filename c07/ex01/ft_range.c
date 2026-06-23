/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falamlih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 16:14:52 by falamlih          #+#    #+#             */
/*   Updated: 2025/08/25 18:34:20 by falamlih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(int i, int a)
{
	int	j;

	j = 0;
	while (i < a)
	{
		j++;
		i++;
	}
	return (j);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*arr;

	if (min >= max)
		return (NULL);
	i = ft_strlen(min, max);
	arr = (int *)malloc(sizeof(int) * i);
	j = 0;
	if (!arr)
		return (NULL);
	while (min < max)
	{
		arr[j] = min;
		min++;
		j++;
	}
	return (arr);
}
