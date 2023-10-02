/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:02:03 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/02 17:34:00 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb -1));
}
/*
int	main()
{
	printf("%d\n", ft_recursive_factorial(4));
	printf("%d\n", ft_recursive_factorial(5));
	printf("%d\n", ft_recursive_factorial(6));
}*/
