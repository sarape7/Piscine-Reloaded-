/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:29:23 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/02 17:39:08 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

void	ft_putstr(char	*str);

void	ft_putstr(char	*str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
/*
int main ()
{
	ft_putstr( "Hello");
	return (0);
}*/
