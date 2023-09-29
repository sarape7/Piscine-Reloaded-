/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:27:44 by sarperez          #+#    #+#             */
/*   Updated: 2023/09/29 13:44:41 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_sqrt(int nb);
int	ft_sqrt(int nb)
{
	int a;

	a = 0.01;

	if(nb <= 0)
		return(0);
	else
	{
		while((a*a) != nb && nb > 0)
		{
			a = a + 1;
			return (a);
		}
	}
}
int main()
{
	printf("%d/n", ft_sqrt(4));
}
