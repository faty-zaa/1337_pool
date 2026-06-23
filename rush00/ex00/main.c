/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falamlih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 09:04:35 by falamlih          #+#    #+#             */
/*   Updated: 2025/08/17 18:33:55 by falamlih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush0(int x, int y);
void	rush1(int x, int y);
void	rush2(int x, int y);
void	rush3(int x, int y);
void	rush4(int x, int y);

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

int	main(int arc, char **arv)
{
	if (arc != 4)
	{
		write(2, "enter the program name first, the rush num, x and y\n", 52);
		return (0);
	}
	if (arc == 4)
	{
		if (!(arv[1][0] == '0' || arv[1][0] == '1' || arv[1][0] == '2'
			|| arv[1][0] == '3' || arv[1][0] == '4'))
			write(2, "enter the num of the rush to test (0,1,2,3 or 4)\n", 67);
		else if (arv[1][0] == '0')
			rush0(ft_atoi(arv[2]), ft_atoi(arv[3]));
		else if (arv[1][0] == '1')
			rush1(ft_atoi(arv[2]), ft_atoi(arv[3]));
		else if (arv[1][0] == '2')
			rush2(ft_atoi(arv[2]), ft_atoi(arv[3]));
		else if (arv[1][0] == '3')
			rush3(ft_atoi(arv[2]), ft_atoi(arv[3]));
		else if (arv[1][0] == '4')
			rush4(ft_atoi(arv[2]), ft_atoi(arv[3]));
	}
	return (0);
}
