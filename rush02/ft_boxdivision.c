/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boxdivion.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 13:40:55 by ciparren          #+#    #+#             */
/*   Updated: 2025/11/23 19:21:27 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"
#include <stdlib.h>

void	ft_normalize_box(char *dest, char *src)
{
	int	len;

	len = ft_strlen(src);
	if (len == 3)
	{
		dest[0] = src[0];
		dest[1] = src[1];
		dest[2] = src[2];
	}
	else if (len == 2)
	{
		dest[0] = '0';
		dest[1] = src[0];
		dest[2] = src[1];
	}
	else
	{
		dest[0] = '0';
		dest[1] = '0';
		dest[2] = src[0];
	}
	dest[3] = '\0';
}

void	ft_print_tens_units(char *box, char num[100][42], char val[100][42])
{
	char	digit[2];
	char	tens[3];

	digit[1] = '\0';
	tens[2] = '\0';
	if (box[1] >= '2')
	{
		tens[0] = box[1];
		tens[1] = '0';
		ft_print_value(tens, num, val);
		if (box[2] > '0')
		{
			ft_putstr(" ");
			digit[0] = box[2];
			ft_print_value(digit, num, val);
		}
	}
	else if (box[1] == '1' || (box[1] == '0' && box[2] > '0'))
	{
		tens[0] = box[1];
		tens[1] = box[2];
		if (box[1] == '0')
			ft_print_value(&box[2], num, val);
		else
			ft_print_value(tens, num, val);
	}
}

void	ft_print_box(char *raw_box, char num[100][42], char val[100][42])
{
	char	box[4];
	char	digit[2];

	digit[1] = '\0';
	ft_normalize_box(box, raw_box);
	if (box[0] > '0' && box[0] <= '9')
	{
		digit[0] = box[0];
		ft_print_value(digit, num, val);
		ft_putstr(" ");
		ft_print_value("100", num, val);
		if (box[1] > '0' || box[2] > '0')
			ft_putstr(" ");
	}
	ft_print_tens_units(box, num, val);
}

void	divide(char *input_num, char number[100][42], char value[100][42])
{
	int		total_boxes;
	int		last_digits;
	int		i;
	char	*box;
	char	*zeros;

	total_boxes = ft_count_boxes(input_num);
	last_digits = ft_last_box(input_num);
	i = -1;
	while (++i < total_boxes)
	{
		if (i == 0)
			box = ft_getfirstbox(input_num, last_digits);
		else
			box = ft_get_complete_box(input_num, i - 1, last_digits);
		if (ft_strcmp(box, "000") != 0 && ft_strcmp(box, "00") != 0
			&& ft_strcmp(box, "0") != 0)
		{
			if (i > 0)
				ft_putstr(" ");
			ft_print_box(box, number, value);
			if (i < total_boxes - 1)
			{
				ft_putstr(" ");
				zeros = ft_boxzeros(total_boxes - i - 1);
				ft_print_value(zeros, number, value);
				free(zeros);
			}
		}
		free(box);
	}
	ft_putstr("\n");
}
