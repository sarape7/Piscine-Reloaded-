/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:42:46 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/03 12:33:33 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	dest;
	char	*p_src;
	char	*p_dest;

	if (!src)
		return (NULL);
	dest = malloc(1);
	if (!dest)
		return (NULL);
		p_src = src;
		p_dest = dest;
	while (*p_dest++ = *p_src++)
		return (dest);
}

/*
int main()
{
	char	original[] = "Hola, mundo!";
	char	*copia = ft_strdup(original);

	if (copia != NULL)
	{
		printf("Copia: %s\n", copia);
		free(copia);
	}
	else
	{
		printf("Error: no se pudo asignar memoria.\n");
	}
	return (0);
}*/
