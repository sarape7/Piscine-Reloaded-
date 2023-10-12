/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:08:57 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/12 12:29:06 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char y)
{
	write(1, &y, 1);
}

void ft_putnbr(int x)
{
	if(x == -2147483647)
	{
	
	ft_putchar( '-');
	ft_putchar('2');
	ft_putnbr(147483647);
	}

	else if(x < 0)
	{
	ft_putchar('-');
	x=-x;
	ft_putnbr(x);
	}
	else if (x > 9)
	{
		ft_putnbr(x / 10);
		ft_putnbr(x % 10);
	}
	ft_putchar(x + '0');
}



void ft_foreach(int *tab, int length, void(*f)(int))
{
	int	cont;

	cont = 0;

	while (cont < length)
	{
		f(tab[cont]);
		cont++;
	}
}

	
int main()
{
	int tab[] = {1, 2, 3, 4};
	int length;

	length = 4;
		
	ft_foreach(tab, length, &ft_putnbr);
		
}
