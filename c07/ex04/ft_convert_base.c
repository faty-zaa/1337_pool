/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falamlih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 10:39:15 by falamlih          #+#    #+#             */
/*   Updated: 2025/08/26 17:51:23 by falamlih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

long	ft_strlen(char *str)
{
	long	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[i] == '\0' || ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		j = i + 1 ;
		if (base[i] == '-' || base[i] == '+' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	get_index(char *base, char f)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == f)
			return (i);
		i++;
	}
	return (-1);
}

long	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	long	res;
	long	l;

	if (check_base(base) == 0)
		return (0);
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	res = 0;
	l = ft_strlen(base);
	while (get_index(base, str[i]) != -1)
		res = res * l + get_index(base, str[i++]);
	return (res * sign);
}
