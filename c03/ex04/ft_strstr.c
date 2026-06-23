/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falamlih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 11:58:20 by falamlih          #+#    #+#             */
/*   Updated: 2025/08/20 18:56:26 by falamlih         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	l;

	l = ft_strlen(to_find);
	if (to_find[0] == '\0')
		return (str);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (to_find[j] && str[i + j] && to_find[j] == str[i + j])
			j++;
		if (j == l)
			return (&str[i]);
		j = 0;
		i++;
	}
	return (0);
}
