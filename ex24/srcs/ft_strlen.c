/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:44:51 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/02 17:41:41 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<unistd.h>
#include<stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (*str != '\0')
	{
		cont = cont + 1;
		str++;
	}
	return (cont);
}
/*
int main()
{
	printf("%d\n", ft_strlen("Hola"));
}*/
