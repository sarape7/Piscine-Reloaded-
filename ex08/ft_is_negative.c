/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:47:26 by sarperez          #+#    #+#             */
/*   Updated: 2023/09/28 19:06:31 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int	n);

void	ft_is_negative(int	n)
{
	if(n < '0')
	{
		char	T;
		T = 78;
		write(1, &T, 1);
	}
	else
	{
		char	L;
		L=	80;
		write(1, &L, 1);
	}
}

int	main()
{
	int	a;
	
	a = -5;
	ft_is_negative(a);

	a = '5';
	ft_is_negative(a);

	return (0);
}
