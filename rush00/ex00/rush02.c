/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falamlih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 14:11:20 by falamlih          #+#    #+#             */
/*   Updated: 2025/08/17 18:29:03 by falamlih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		error(int i, int j);

void	rush2(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if ((j == 0 && i == 0) || (j == 0 && i == x - 1))
				ft_putchar('A');
			else if ((i == 0 && j == y - 1) || (j == y - 1 && i == x - 1))
				ft_putchar('C');
			else if (j == 0 || i == 0 || i == x - 1 || j == y - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar ('\n');
		j++;
	}
}
