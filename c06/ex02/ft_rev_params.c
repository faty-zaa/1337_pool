/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falamlih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 10:34:34 by falamlih          #+#    #+#             */
/*   Updated: 2025/08/24 10:49:31 by falamlih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int arc, char **arv)
{
	int	i;
	int	j;

	if (arc < 2)
		return (0);
	i = arc - 1;
	if (arc > 1)
	{
		while (i > 0)
		{
			j = 0;
			while (arv[i][j])
			{
				write(1, &arv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
