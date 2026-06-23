/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falamlih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 20:54:59 by falamlih          #+#    #+#             */
/*   Updated: 2025/08/31 16:26:00 by falamlih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct s_point
{
	int	x;
	int	y;
}t_point;
void	set_point(t_point *point);

#endif
