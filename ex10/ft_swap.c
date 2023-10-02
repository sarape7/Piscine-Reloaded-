/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:39:07 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/02 17:20:57 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_swap(int	*a, int	*b);

void	ft_swap(int	*a, int	*b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main()
{
	int	num1;
	int	num2;

	num1 = 5;
	num2 = 10;
	printf("num 1 orig = %i\n", num1);
	printf("num 2 orig = %i\n", num2);
	ft_swap(&num1, &num2);
	printf("num 1 swap = %i\n", num1);
	printf("num 2 swap = %i\n", num2);
	return(0);
}*/
