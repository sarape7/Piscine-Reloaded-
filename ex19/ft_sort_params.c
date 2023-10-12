/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:36:16 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/12 11:24:54 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include <unistd.h>

int	strcmp(const char *str1, const char *str2)
{
	while (*str1 && *str2 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void	bubble_sort(char *arr[], int n)
{
	int		i;
	int		j;
	int		swapped;
	char	*temp;

	i = 1;
	while (i < n)
	{
		j = 1;
		swapped = 0;
		while (j < n - i + 1)
		{
			if (strcmp(arr[j - 1], arr[j]) > 0)
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
				swapped = 1;
			}
			j++;
		}
		if (!swapped)
			break ;
		i++;
	}
}

void	putstr(const char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_sort_params(int argc, char	*argv[])
{
	int	index;

	if (argc > 2)
	{
		bubble_sort(&argv[1], argc - 1);
		index = 1;
		while (index < argc)
		{
			putstr(argv[index]);
			write(1, "\n", 1);
			index++;
		}
	}
}

int	main(int argc, char	**argv)
{
	if (argc > 1)
	{
		ft_sort_params(argc, argv);
	}
	return (0);
}
