/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:41:15 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/06 14:19:36 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

void	set_point(t_point	*point);

void	set_point(t_point	*point)
{
	point->x = 42;
	point->y = 21;
}

int	main(void)
{
	t_point		point;

	set_point (&point);
//  printf("%i\n", point.x);
//  printf("%i\n", point.y);
	return (0);
}
