/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falamlih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 10:21:22 by falamlih          #+#    #+#             */
/*   Updated: 2025/08/24 10:33:39 by falamlih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int arc, char **arv)
{
	int	i;
	int	j;

	if (arc < 2)
		return (0);
	i = 1;
	if (arc > 1)
	{
		j = 0;
		while (i < arc)
		{
			j = 0;
			while (arv[i][j])
			{
				write(1, &arv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
