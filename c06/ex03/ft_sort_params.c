/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falamlih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 10:50:11 by falamlih          #+#    #+#             */
/*   Updated: 2025/08/24 15:03:18 by falamlih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	ft_print(int arc, char **arv)
{
	int	i;
	int	j;

	i = 1;
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

int	ft_scmp(char *arv1, char *arv2)
{
	int	i;

	i = 0;
	while (arv1[i] == arv2[i] && arv1[i])
		i++;
	return (arv1[i] - arv2[i]);
}

int	main(int arc, char **arv)
{
	int	i;
	int	l;

	if (arc < 2)
		return (0);
	i = 1;
	if (arc > 1)
	{
		while (i < arc)
		{
			l = i + 1;
			while (l < arc)
			{
				if (ft_scmp(arv[i], arv[l]) > 0)
					ft_swap(&arv[i], &arv[l]);
				l++;
			}
			i++;
		}
		ft_print(arc, arv);
	}
	return (0);
}
