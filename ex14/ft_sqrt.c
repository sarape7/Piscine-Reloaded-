/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:27:44 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/02 17:37:09 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	a;

	if (nb <= 0)
		return (0);
	a = 1;
	while (a * a <= nb)
	{
		if (a * a == nb)
			return (a);
		a++;
	}
	return (0);
}
/*
int main()
{
	int	result = ft_sqrt(4);
	printf("Raíz cuadrada de 4: %d\n", result);
	int	res = ft_sqrt(15);
	printf("Raíz cuadrada de 4: %d\n", res);

	return (0);
}*/
