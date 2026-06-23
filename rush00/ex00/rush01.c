/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falamlih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 13:25:42 by falamlih          #+#    #+#             */
/*   Updated: 2025/08/17 18:28:26 by falamlih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		error(int i, int j);

void	rush1(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if ((j == 0 && i == 0) || (j == y - 1 && i == x -1))
				ft_putchar('/');
			else if ((j == 0 && i == x - 1) || (j == y - 1 && i == 0))
				ft_putchar('\\');
			else if (j == 0 || j == y - 1 || i == 0 || i == x -1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
