/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falamlih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 08:28:43 by falamlih          #+#    #+#             */
/*   Updated: 2025/08/17 18:36:16 by falamlih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

int	error(int i, int j)
{
	if (i < 0 || j < 0)
	{
		write(2, "can´t display the rectangle with negative parameters\n", 54);
		return (0);
	}
	else if (i == 0 || j == 0)
		return (0);
	return (1);
}

void	rush0(int x, int y)
{
	int	i;
	int	j;

	if (error(x, y) == 0)
		return ;
	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if ((j == 0 && i == 0) || (j == 0 && i == x - 1)
				|| (j == y - 1 && i == 0) || (j == y - 1 && i == x - 1))
				ft_putchar('o');
			else if (j == 0 || j == y - 1)
				ft_putchar('-');
			else if ((i == 0 || i == x - 1))
				ft_putchar('|');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
