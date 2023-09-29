/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 20:53:58 by sarperez          #+#    #+#             */
/*   Updated: 2023/09/29 12:55:59 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int ft_iterative_factorial(int nb);

int ft_iterative_factorial(int nb)
{
	int c;

	c = 1;
	while(nb > 0)
	{
		c = nb * c;
		nb --;
	}
	return (c);
}

int main()
{
	printf("%d\n", ft_iterative_factorial(4));
	printf("%d", ft_iterative_factorial(5));
}
