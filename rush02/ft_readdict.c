/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readdict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 14:36:07 by ciparren          #+#    #+#             */
/*   Updated: 2025/11/23 19:24:23 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		fd;
	ssize_t	bytes_r;
	char	buffer[1024];
	char	keys[42][42];
	char	values[42][42];

	keys[42][42] = {0};
	values[42][42] = {0};
	bytes_r = 0;
	if (argc != 2)
		return (-1);
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		write(1, "Dict Error\n", 11);
		return (-1);
	}
	while ((bytes_r = read(fd, buffer, sizeof(buffer) - 1)) > 0)
	{
		buffer[bytes_r] = '\0';
	}
	close(fd);
	ft_parsedict(buffer, keys, values);
	// Aquí deberías pasar el número a convertir
	divide(argv[1], keys, values);
	return (0);
}

int	ft_parsedict(char *buffer, char number[42][42], char value[42][42])
{
	int		i;
	int		cont;
	char	charnum[40];
	char	charvalue[40];
	int		contuni;

	i = 0;
	cont = 0;
	contuni = 0;
	ft_memset(charnum, 0, 40);
	ft_memset(charvalue, 0, 40);
	while (buffer[i])
	{
		while (buffer[i] != '\n' && buffer[i])
		{
			while (buffer[i] != ':' && buffer[i])
			{
				if (buffer[i] == ' ')
				{
					i++;
					continue ;
				}
				charnum[contuni] = buffer[i];
				contuni++;
				i++;
			}
			if (buffer[i] == ':')
				i++;
			charnum[contuni] = '\0';
			ft_strcpy(number[cont], charnum);
			contuni = 0;
			while (buffer[i] != '\n' && buffer[i])
			{
				if (buffer[i] == ' ')
				{
					i++;
					continue ;
				}
				charvalue[contuni] = buffer[i];
				contuni++;
				i++;
			}
			charvalue[contuni] = '\0';
			ft_strcpy(value[cont], charvalue);
			contuni = 0;
			ft_memset(charnum, 0, 40);
			ft_memset(charvalue, 0, 40);
			cont++;
		}
		if (buffer[i] == '\n')
			i++;
	}
	return (cont);
}
