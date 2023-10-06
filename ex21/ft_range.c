/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:51:55 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/05 12:53:29 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<string.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	*a;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	a = malloc(sizeof(int) * (max - min));
	while (i <= max)
	{
		a[i] = i + min;
		i++;
	}
	return (a);
}
/*
int main()
{
	int	*a;
	int	i = 0;
	a = ft_range(6, 10);
	while (i < (10 - 6))
		printf("%i", a[i++]);
}*/