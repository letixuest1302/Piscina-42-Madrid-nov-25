/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 21:59:42 by albben-a          #+#    #+#             */
/*   Updated: 2025/11/16 23:11:09 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	matrix(char	arr[24][4])
{
	int		i;
	int		j;
	int		k;
	int		m;
	int		x = 0;
	char	matrix[4][4];

	i = 0;
	while (i < 24)
	{
		j = 0;
		while (j < 24)
		{
			while (arr[i] == arr[j])
				j++;
			k = 0;
			while (k < 24)
			{
				while (arr[i] == arr[k] || arr[j] == arr[k])
					k++;
				m = 0;
				while (m < 24)
				{
					while (arr[i] == arr[m] || arr[j] == arr[m] || arr[k] == arr[m])
						m++;
					matrix[0][0] = arr[i][0];
					matrix[0][1] = arr[i][1];
					matrix[0][2] = arr[i][2];
					matrix[0][3] = arr[i][3];
					matrix[1][0] = arr[j][0];
					matrix[2][0] = arr[k][0];
					matrix[3][0] = arr[m][0];
					matrix[1][1] = arr[j][1];
					matrix[1][2] = arr[j][2];
					matrix[1][3] = arr[j][3];
					matrix[2][1] = arr[k][1];
					matrix[2][2] = arr[k][2];
					matrix[2][3] = arr[k][3];
					matrix[3][1] = arr[m][1];
					matrix[3][2] = arr[m][2];
					matrix[3][3] = arr[m][3];
					while (x <= 3)
					{
						printf("%c", matrix[x][0]);
						printf("%c", matrix[x][1]);
						printf("%c", matrix[x][2]);
						printf("%c", matrix[x][3]);
						x++;
						printf("%c", '\n');
					}
				x = 0;
				m++;
				}
			k++;
			}
		j++;
		}
	i++;
	}
}


int	main(void)
{
	char	valid[24][4] = {
	{"4321"},
	{"4231"},
	{"4213"},
	{"4312"},
	{"4123"},
	{"4132"},
	{"1423"},
	{"1432"},
	{"2143"},
	{"2413"},
	{"2431"},
	{"3124"},
	{"3214"},
	{"3142"},
	{"3241"},
	{"3412"},
	{"3421"},
	{"1243"},
	{"1342"},
	{"2134"},
	{"2314"},
	{"2341"},
	{"1324"},
	{"1234"}};
	matrix(valid);
	return (0);
}
