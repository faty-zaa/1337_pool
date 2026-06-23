/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falamlih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 14:35:19 by falamlih          #+#    #+#             */
/*   Updated: 2025/08/23 10:10:12 by falamlih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	l;
	int	j;

	i = 0;
	l = ft_strlen(base);
	if (l <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	con_bs(long nbr, char *base)
{
	int		i;
	int		b;
	char	c[64];

	if (!check_base(base))
		return ;
	b = ft_strlen(base);
	if (nbr == 0)
		write(1, "0", 1);
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	i = 0;
	while (nbr > 0)
	{
		c[i] = base[nbr % b];
		nbr /= b;
		i++;
	}
	while (i > 0)
		write(1, &c[--i], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	con_bs(nbr, base);
}
/*int main(void)
{
    ft_putnbr_base(42, "0123456789");        // decimal: 42
    write(1, "\n", 1);

    ft_putnbr_base(-42, "0123456789");       // decimal: -42
    write(1, "\n", 1);

    ft_putnbr_base(42, "01");                 // binary: 101010
    write(1, "\n", 1);

    ft_putnbr_base(255, "01234567");          // octal: 377
    write(1, "\n", 1);

    ft_putnbr_base(255, "0123456789ABCDEF");  // hex uppercase: FF
    write(1, "\n", 1);

    ft_putnbr_base(-255, "0123456789ABCDEF"); // hex uppercase negative: -FF
    write(1, "\n", 1);

    ft_putnbr_base(123456789, "0123456789");  // large decimal number
    write(1, "\n", 1);

    ft_putnbr_base(123456789, "poneyvif");    // custom base (8 chars)
    write(1, "\n", 1);

    ft_putnbr_base(0, "0123456789");           // zero test
    write(1, "\n", 1);

    return (0);
}*/
