/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falamlih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 11:38:47 by falamlih          #+#    #+#             */
/*   Updated: 2025/08/25 12:24:08 by falamlih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	fdv(int nb)
{
	int	n;

	if (nb == 0 || nb == 1)
		return (0);
	n = 2;
	while (n < nb)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	n;

	if (fdv(nb) == 1)
		return (nb);
	n = nb + 1;
	while (n > nb)
	{
		if (fdv(n) == 1)
			return (n);
		n++;
	}
	return (0);
}
