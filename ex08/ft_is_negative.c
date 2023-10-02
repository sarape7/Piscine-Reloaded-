/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:47:26 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/02 17:16:26 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	t;
	char	l;

	if (n < '0')
	{
		t = 78;
		write(1, &t, 1);
	}
	else
	{
		l = 80;
		write(1, &l, 1);
	}
}
/*
int	main()
{
	int	a;

	a = -5;
	ft_is_negative(a);
	a = '5';
	ft_is_negative(a);
	return (0);
}*/
