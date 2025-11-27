/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filtered_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreyes-s <jreyes-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:06:42 by jreyes-s          #+#    #+#             */
/*   Updated: 2025/11/16 19:54:48 by jreyes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	**ft_filtered_columns(char **matrix, char **filtered_matrix)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (matrix[x][y])
	{
		if ((matrix[x][y] == matrix[x][y + 1] && y >= 0 && y <= 3))
			y++;
		else
			filtered_matrix[x][y] = filtered_matrix[x][y];
	}
	return (filtered_matrix);
}

char	**ft_validate_rows(char **matrix, char **filtered_matrix)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (matrix[x][y])
	{
		if ((matrix[x][y] == matrix[x + 1][y] && x >= 0 && x <= 3))
		{
			x++;
		}
		else
		{
			filtered_matrix[x][y] = matrix[x][y];
		}
		y++;
	}
	return (filtered_matrix);
}

char	**ft_filtered_matrix(char **matrix)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	
	return (matrix);
}

int	main(void)
{
	ft_generate_and_filter();
	return (0);
}
