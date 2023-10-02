/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:05:31 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/02 17:00:57 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z' && c >= 'a')
	{
		write(1, &c, 1);
		c++;
	}
}
/*
int main ()
{
	ft_print_alphabet();
	return (0);
}*/
