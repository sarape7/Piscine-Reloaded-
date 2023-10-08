/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:15:58 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/06 13:27:37 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include<stdio.h>

int main()
{
    int     Valor;
    Valor = -5;
    int     absoluto;
    
    absoluto = ABS(Valor);
    printf( "%i",absoluto);
}