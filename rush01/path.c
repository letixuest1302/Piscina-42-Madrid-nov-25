/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 14:01:23 by albben-a          #+#    #+#             */
/*   Updated: 2025/11/16 21:24:39 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rowd(int crow, int ccol, char paths[16][6], char matrix[6][6])
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (crow <= 4)
	{
		while (ccol <= 4)
		{
			paths[i][j] = matrix[crow][ccol];
			j++;
			ccol++;
		}
		paths[i][j] = '\0';
		ccol = 0;
		j = 0;
		crow++;
		i++;
	}
}

void	ft_colup(int crow, int ccol, char paths[16][6], char matrix[6][6])
{
	int	i;
	int	j;

	i = 4;
	j = 0;
	while (ccol <= 4)
	{
		while (crow <= 4)
		{
			paths[i][j] = matrix[crow][ccol];
			crow++;
			j++;
		}
		paths[i][j] = '\0';
		crow = 0;
		j = 0;
		ccol++;
		i++;
	}
}

void	ft_rowi(int crow, int ccol, char paths[16][6], char matrix[6][6])
{
	int	i;
	int	j;

	i = 8;
	j = 0;
	while (crow <= 4)
	{
		while (ccol >= 1)
		{
			paths[i][j] = matrix[crow][ccol];
			ccol--;
			j++;
		}
		paths[i][j] = '\0';
		ccol = 5;
		j = 0;
		crow++;
		i++;
	}
}

void	ft_coldown(int crow, int ccol, char paths[16][6], char matrix[6][6])
{
	int	j;
	int	i;

	i = 12;
	j = 0;
	while (ccol <= 4)
	{
		while (crow >= 1)
		{
			paths[i][j] = matrix[crow][ccol];
			crow--;
			j++;
		}
		paths[i][j] = '\0';
		crow = 5;
		j = 0;
		ccol++;
		i++;
	}
}

void	path_find(char matrix[6][6], char paths[16][6])
{
	int	crow;
	int	ccol;

	crow = 1;
	ccol = 0;
	ft_rowd(crow, ccol, paths, matrix);
	crow = 0;
	ccol = 1;
	ft_colup(crow, ccol, paths, matrix);
	crow = 1;
	ccol = 5;
	ft_rowi(crow, ccol, paths, matrix);
	crow = 5;
	ccol = 1;
	ft_coldown(crow, ccol, paths, matrix);
}
/*
#include <stdio.h>

int	main(void)
{
	char	paths[16][6];
	char	matrix[6][6] = {{"123456"}, {"234561"}, {"345612"}, 
	{"456123"}, {"561234"}, {"612345"}};
	int	i;
	int	j;

	i = 0;
	j = 0;
	path_find(matrix, paths);
	while (i <= 16)
	{
		printf("%s", paths[i]);
		printf("%c", '\n');
		i++;
	}
	return (0);
}*/
