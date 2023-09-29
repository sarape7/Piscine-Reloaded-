/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 20:35:07 by sarperez          #+#    #+#             */
/*   Updated: 2023/09/28 20:52:15 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
void ft_div_mod(int a, int b, int *div, int *mod);
void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a/b;
	*mod = a%b;
}
int main()
{
	int a;
	int b;
	int	div;
	int	mod;

	a= 15;
	b= 5;

	ft_div_mod(a, b, &div, &mod);
	printf("%d\n,%d\n", div, mod);
}
