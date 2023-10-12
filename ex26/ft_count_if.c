/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:24:33 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/12 15:47:06 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_count_if(char **tab, int(*f)(char*))
{
	int	count;

	count = 0;
	while (*tab != 0)
	{
		if (f(*tab) == 1)
			count++;
		tab++;
	}
	return (count);
}

int	is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			return (0);
		str++;
	}
	return (1);
}

int main()
{
	char	*arr[] = {"HELLO", "WORdLD", "123", "", " ", ".,", "\n", 0};
	int		count = ft_count_if(arr, &is_lowercase);
	printf("Number of uppercase strings: %d\n", count);
}