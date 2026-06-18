/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 13:40:55 by ciparren          #+#    #+#             */
/*   Updated: 2025/11/23 19:21:27 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_get_dict_size(char *path)
{
	int		fd;
	int		count;
	int		bytes_read;
	char	buffer[1024];

	count = 0;
	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (-1);
	bytes_read = read(fd, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		count += bytes_read;
		bytes_read = read(fd, buffer, sizeof(buffer));
	}
	close(fd);
	return (count);
}

char	*ft_read_dict(char *path)
{
	int		fd;
	int		size;
	char	*buffer;

	size = ft_get_dict_size(path);
	if (size <= 0)
		return (NULL);
	buffer = (char *)malloc(sizeof(char) * (size + 1));
	if (!buffer)
		return (NULL);
	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (NULL);
	}
	read(fd, buffer, size);
	buffer[size] = '\0';
	close(fd);
	return (buffer);
}

int	main(int argc, char **argv)
{
	char	*dict_content;
	char	*dict_path;
	char	*num_to_convert;
	char	keys[100][42];
	char	values[100][42];

	if (!ft_validate_args(argc, argv, &dict_path))
	{
		ft_putstr("Error\n");
		return (1);
	}
	num_to_convert = (argc == 3) ? argv[2] : argv[1];
	if (!ft_is_numeric(num_to_convert))
	{
		ft_putstr("Error\n");
		return (1);
	}
	dict_content = ft_read_dict(dict_path);
	if (!dict_content)
	{
		ft_putstr("Dict Error\n");
		return (1);
	}
	ft_memset((char *)keys, 0, sizeof(keys));
	ft_memset((char *)values, 0, sizeof(values));
	if (ft_parsedict(dict_content, keys, values) == -1)
	{
		free(dict_content);
		ft_putstr("Dict Error\n");
		return (1);
	}
	free(dict_content);
	divide(num_to_convert, keys, values);
	return (0);
}
