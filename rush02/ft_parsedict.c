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

static int	clean_spaces(char *buffer, int i)
{
	while (buffer[i] == ' ' || (buffer[i] >= '\t' && buffer[i] <= '\r'))
		i++;
	return (i);
}

int	ft_parsedict(char *buf, char num[100][42], char val[100][42])
{
	int	i;
	int	row;
	int	k;

	i = 0;
	row = 0;
	while (buf[i] && row < 100)
	{
		i = clean_spaces(buf, i);
		if (buf[i] == '\n' || !buf[i])
		{
			if (buf[i])
				i++;
			continue ;
		}
		k = 0;
		while (buf[i] >= '0' && buf[i] <= '9' && k < 41)
			num[row][k++] = buf[i++];
		num[row][k] = '\0';
		i = clean_spaces(buf, i);
		if (buf[i++] != ':')
			return (-1);
		i = clean_spaces(buf, i);
		k = 0;
		while (buf[i] && buf[i] != '\n' && k < 41)
			val[row][k++] = buf[i++];
		val[row][k] = '\0';
		row++;
		if (buf[i] == '\n')
			i++;
	}
	return (0);
}

void	ft_print_value(char *key, char number[100][42], char value[100][42])
{
	int	i;

	i = 0;
	while (i < 100 && number[i][0] != '\0')
	{
		if (ft_strcmp(key, number[i]) == 0)
		{
			ft_putstr(value[i]);
			return ;
		}
		i++;
	}
}
