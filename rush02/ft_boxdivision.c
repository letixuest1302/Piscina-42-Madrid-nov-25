/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boxdivision.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 13:53:17 by acanadil          #+#    #+#             */
/*   Updated: 2025/11/23 20:36:41 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"
#include <stdlib.h>
#include <unistd.h>

void	divide(char *input_num, char number[42][42], char value[42][42])
{
	int		total_boxes;
	int		last_box_digits;
	int		i;
	char	*current_box;
	char	*middle;

	total_boxes = ft_count_boxes(input_num);
	last_box_digits = ft_last_box(input_num);
	i = 0;
	/*	
	if (last_box_digits > 0)
	{
		current_box = ft_getfirstbox(input_num, last_box_digits);
		ft_print_box(current_box, number, value);
		free(current_box);
		if (total_boxes > 1)
		{
			middle = ft_boxzeros(total_boxes - 1);
			ft_print_value(middle, number, value);
			free(middle);
			ft_putstr(" ");
		}
		i++;
	}
*/
	while (i < total_boxes)
	{
		current_box = ft_get_complete_box(input_num, i, last_box_digits);
		ft_print_box(current_box, number, value);
		free(current_box);
		if (i < total_boxes - 1)
		{
			middle = ft_boxzeros(total_boxes - i - 1);
			ft_print_value(middle, number, value);
			ft_putstr(" ");
		}
		i++;
	}
}

char	*ft_getfirstbox(char *number, int last_box_digits)
{
	char	*first_box;
	int		i;

	first_box = malloc(last_box_digits + 1);
	if (!first_box)
		return (NULL);
	i = 0;
	while (i < last_box_digits)
	{
		first_box[i] = number[i];
		i++;
	}
	first_box[i] = '\0';
	return (first_box);
}

char	*ft_get_complete_box(char *number, int box_index, int last_box_digits)
{
	char	*box;
	int		start;
	int		i;

	box = malloc(4);
	if (!box)
		return (NULL);
	start = last_box_digits + (box_index - 1) * 3;
	box[0] = '0';
	box[1] = '0';
	box[2] = '0';
	i = 0;
	while (i < 3)
	{
		box[i] = number[start + i];
		i++;
	}
	box[3] = '\0';
	return (box);
}

int	ft_count_boxes(char *str)
{
	int	len;
	int	boxes;

	len = ft_strlen(str);
	boxes = len / 3;
	if (len % 3 != 0)
		boxes++;
	return (boxes);
}

int	ft_last_box(char *str)
{
	int	len;
	int	lastbox;

	len = ft_strlen(str);
	lastbox = len % 3;
	if (lastbox == 0)
		lastbox = 3;
	return (lastbox);
}

char	*ft_boxzeros(int box_index)
{
	char	*zeros;
	int		total_zeros;
	int		i;

	if (box_index <= 0)
		return (NULL);
	total_zeros = box_index * 3;
	zeros = malloc(total_zeros + 2);
	if (!zeros)
		return (NULL);
	zeros[0] = '1';
	i = 1;
	while (i <= total_zeros)
	{
		zeros[i] = '0';
		i++;
	}
	zeros[i] = '\0';
	return (zeros);
}

void	ft_print_box(char *box, char number[42][42], char value[42][42])
{
	char	digit[2];
	char	tens[3];

	if (box[0] > '0' && box[0] <= '9')
	{
		digit[0] = box[0];
		digit[1] = '\0';
		ft_print_value(digit, number, value);
		ft_putstr(" hundred ");
	}
	if (box[0] != '0' && (box[1] != '0' || box[2] != '0'))
		ft_putstr(" ");
	if (box[1] == '1')
	{
		tens[0] = box[1];
		tens[1] = box[2];
		tens[2] = '\0';
		ft_print_value(tens, number, value);
	}
	else
	{
		if (box[1] != '0')
		{
			tens[0] = box[1];
			tens[1] = '0';
			tens[2] = '\0';
			ft_print_value(tens, number, value);
		}
		if (box[2] != '0')
		{
			digit[0] = box[2];
			digit[1] = '\0';
			ft_print_value(digit, number, value);
		}
	}
	write(1, " ", 1);
}

void	ft_print_value(char *key, char number[42][42], char value[42][42])
{
	int	i;

	i = 0;
	while (i < 42 && number[i][0] != '\0')
	{
		if (ft_strcmp(number[i], key) == 0)
		{
			ft_putstr(value[i]);
			return ;
		}
		i++;
	}
	//	ft_putstr("Dict Error");
}
