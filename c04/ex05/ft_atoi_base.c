/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falamlih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 17:42:16 by falamlih          #+#    #+#             */
/*   Updated: 2025/08/23 10:16:22 by falamlih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	l;
	int	j;

	i = 0;
	l = ft_strlen(base);
	if (l <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_sp(char str)
{
	if (!(str == ' ' || (str >= 9 && str <= 13)))
		return (0);
	return (1);
}

int	check_vs(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	s;
	int	res;
	int	i;
	int	l;

	if (!check_base(base))
		return (0);
	i = 0;
	while (check_sp(str[i]))
		i++;
	s = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	res = 0;
	l = ft_strlen(base);
	while (check_vs(str[i], base) != (-1))
		res = res * l + check_vs(str[i++], base);
	return (res * s);
}
