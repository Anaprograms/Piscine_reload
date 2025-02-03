/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansuarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 16:53:38 by ansuarez          #+#    #+#             */
/*   Updated: 2024/12/24 12:52:11 by ansuarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void	ft_display_file(const char *filename)

{
	int		fd;
	ssize_t	byte_read;
	char	buffer[BUFFER_SIZE];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write (2, "Cannot read file.\n", 18);
		return ;
	}
	byte_read = read(fd, buffer, sizeof(buffer));
	while (byte_read > 0)
	{
		write (1, buffer, byte_read);
		byte_read = read (fd, buffer, sizeof(buffer));
	}
	if (byte_read == -1)
	{
		write (2, "Cannot read file.\n", 18);
	}
	close(fd);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		write (2, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write (2, "Too many arguments.\n", 20);
		return (1);
	}
	ft_display_file(argv[1]);
	return (0);
}
