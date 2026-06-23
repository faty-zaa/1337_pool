/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falamlih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 15:04:00 by falamlih          #+#    #+#             */
/*   Updated: 2025/08/17 18:29:30 by falamlih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		error(int i, int j);

void	rush3(int x, int y)
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
			if (i == 0 && (j == 0 || j == y - 1))
				ft_putchar('A');
			else if (i == x - 1 && (j == 0 || j == y -1))
				ft_putchar('C');
			else if (j == 0 || j == y - 1 || i == 0 || i == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
