/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:34:00 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/12 17:50:47 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char	*str);

int	main(int argc, char **argv)
{
	int		fd;
	char	buffer[1024];
	size_t	bytes_read;

	if (argv[1] == 0)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Cannot read file.\n");
		return (1);
	}
	bytes_read = read(fd, buffer, sizeof(buffer));
	if (bytes_read > 0)
		ft_putstr(buffer);
	close(fd);
	return (0);
}
