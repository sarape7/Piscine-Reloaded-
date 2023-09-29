/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:27:44 by sarperez          #+#    #+#             */
/*   Updated: 2023/09/29 17:21:40 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//Empiezo suponiendo que el resultado es 1. Recalco que para <= 0 no. Epsilon para ver cuando me he acercado lo suficiente. Diff para ver la differencia. En el bucle hacemos valor absoluto. a la formula para hallarla. %f para sacar numeros decimales
#include<unistd.h>
#include<stdio.h>

double	ft_sqrt(double nb);
double	ft_sqrt(double nb)
{
	double a;

	a = 1.0;

	if(nb <= 0)
		return(0);
	else
	{
		double epsilon;
		double diff;

		diff = a* a -nb;
		epsilon	= 0.001;
		while(diff > epsilon || diff < -epsilon)
		{
			a = (a + nb / a)/ 2;
			diff = a* a - nb;
		}
	return (a);
	}
}
int main()
{
	printf("%f/n", ft_sqrt(4));
	return (0);
}
