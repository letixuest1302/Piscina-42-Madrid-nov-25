/* *************************************************************************** */
/*                                                                             */
/*                                                        :::      ::::::::    */
/*   ft_box_utils.c                                      :+:      :+:    :+:   */
/*                                                      +:+ +:+         +:+    */
/*     By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+           */
/*     Created: 2025/11/23 13:40:55 by ciparren          #+#    #+#            */
/*     Updated: 2025/11/23 19:21:27 by ciparren         ###   ########.fr      */
/*                                                                             */
/* *************************************************************************** */

#include "ft_headers.h"
#include <stdlib.h>

int	ft_count_boxes(char *str)
{
	int	len;

	len = ft_strlen(str);
	if (len % 3 == 0)
		return (len / 3);
	return ((len / 3) + 1);
}

int	ft_last_box(char *str)
{
	int	len;

	len = ft_strlen(str);
	if (len % 3 == 0)
		return (3);
	return (len % 3);
}

char	*ft_getfirstbox(char *number, int last_box_digits)
{
	char	*box;
	int		i;

	box = malloc(last_box_digits + 1);
	if (!box)
		return (NULL);
	i = 0;
	while (i < last_box_digits)
	{
		box[i] = number[i];
		i++;
	}
	box[i] = '\0';
	return (box);
}

char	*ft_get_complete_box(char *number, int box_index, int last_box_digits)
{
	char	*box;
	int		start;
	int		i;

	box = malloc(4);
	if (!box)
		return (NULL);
	start = last_box_digits + (box_index * 3);
	i = 0;
	while (i < 3)
	{
		box[i] = number[start + i];
		i++;
	}
	box[i] = '\0';
	return (box);
}

char	*ft_boxzeros(int box_index)
{
	char	*zeros;
	int		num_zeros;
	int		i;

	num_zeros = box_index * 3;
	zeros = malloc(num_zeros + 2);
	if (!zeros)
		return (NULL);
	zeros[0] = '1';
	i = 1;
	while (i <= num_zeros)
	{
		zeros[i] = '0';
		i++;
	}
	zeros[i] = '\0';
	return (zeros);
}
