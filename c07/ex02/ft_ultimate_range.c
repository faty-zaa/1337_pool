/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falamlih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 18:35:02 by falamlih          #+#    #+#             */
/*   Updated: 2025/08/25 21:13:48 by falamlih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	l;
	int	i;

	l = max - min;
	if (l <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * l);
	if (!*range)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (l);
}
/*
#include <stdio.h>

int main()
{
	int *range;
	int i =0;
	printf("%d\n",ft_ultimate_range(&range,1,10));
	while (i< 9)
	{
		printf("%d", range[i]);
		i++;
	}
}*/
