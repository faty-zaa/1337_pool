/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falamlih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 21:06:48 by falamlih          #+#    #+#             */
/*   Updated: 2025/09/01 14:39:03 by falamlih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putnbr(int nb)
{
	int		i;
	long	n;
	char	str[12];

	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	i = 0;
	while (n > 0)
	{
		str[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (i > 0)
		write (1, &str[--i], 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
