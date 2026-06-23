/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falamlih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:02:20 by falamlih          #+#    #+#             */
/*   Updated: 2025/08/26 18:21:15 by falamlih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		check_base(char *base);
long	ft_atoi_base(char *str, char *base);
long	ft_strlen(char *str);

int	len(long nb, char *base)
{
	int		i;
	int		n;

	i = ft_strlen(base);
	n = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb *= -1;
		n++;
	}
	while (nb != 0)
	{
		nb /= i;
		n++;
	}
	return (n);
}

char	*rev(char *str, int size)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = size - 1;
	if (str[0] == '-')
		i = 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}

char	*ft_putnbr_base(long n, char *base, char *res)
{
	int			i;
	long		l;

	i = 0;
	l = ft_strlen(base);
	if (n < 0)
	{
		res[i++] = '-';
		n *= -1;
	}
	else if (n == 0)
	{
		res[0] = base[0];
		res[1] = '\0';
		return (res);
	}
	while (n > 0)
	{
		res[i++] = base[n % l];
		n /= l;
	}
	res[i] = '\0';
	return (rev(res, i));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	n;
	char	*res;

	if (check_base(base_from) == 0 || check_base(base_to) == 0)
		return (NULL);
	n = ft_atoi_base(nbr, base_from);
	res = (char *)malloc(sizeof(char) * (len(n, base_to) + 1));
	if (!res)
		return (NULL);
	return (ft_putnbr_base(n, base_to, res));
}
