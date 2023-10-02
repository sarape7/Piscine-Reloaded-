/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:21:04 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/02 17:50:00 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//argc: dice cuantos strings hay
// argv: que es argv o *argv[] guarda los strings incluido  a.out
//
#include<string.h>
#include<stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_arg(char	*arg)
{
	if (*arg != '\0')
	{
		ft_putchar(*arg);
		print_arg(arg + 1);
	}
}

void	ft_print_params(int argc, char	*argv[], int index)
{
	char	*arg;

	if (index < argc)
	{
		arg = argv[index];
		print_arg(arg);
		ft_putchar('\n');
		ft_print_params(argc, argv, index + 1);
	}
}
/*
int main(int argc, char *argv[])
{
	ft_print_params(argc, argv, 1);
	return (0);
}*/
