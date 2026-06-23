/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falamlih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 20:19:29 by falamlih          #+#    #+#             */
/*   Updated: 2025/08/20 16:36:31 by falamlih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	s;
	unsigned int	d;

	s = ft_strlen(src);
	d = ft_strlen(dest);
	if (size <= d || size == 0)
		return (size + s);
	i = 0;
	while (src[i] && (i + d) < size - 1)
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (s + d);
}
