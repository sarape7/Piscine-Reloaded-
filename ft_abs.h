/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:55:56 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/05 13:22:11 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
#define FT_ABS_H
#define ABS(Value) ((Value < 0 ) ? -Value : Value)
#endif
/*
#include<stdio.h>
#include<stddef.h>


int	ft_abs(int Value);

int	ft_abs(int Value)
{
	if (Value >= 0)
		return (Value)
	else
	{
		Value = Value * (-1);
		return (Value);
	}
}

int	main()
{
	int	value;

	value = 5;
	ft_abs(value);
}
*/