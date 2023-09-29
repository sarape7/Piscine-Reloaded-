/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:08:18 by sarperez          #+#    #+#             */
/*   Updated: 2023/09/28 19:27:50 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_ft(int	*nbr);

void	ft_ft(int	*nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int num;

	num = 100;

	ft_ft(&num);
	printf("%d\n", num);
	return (0);
}
