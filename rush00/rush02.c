/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 15:52:26 by hezhou            #+#    #+#             */
/*   Updated: 2025/11/09 16:36:22 by lsainz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	f_print(char a, char b, int x, int v_positionx)
{
	ft_putchar (a);
	v_posicionx++;
	while (v_positionx < x)
	{
		ft_putchar (b);
		v_positionx++;
	}
	if (x > 1)
		ft_putchar(a);
	ft_putchar ('\n');
}

void	rush(int x, int y)
{
	int	v_positionx;
	int	v_positiony;

	v_positionx = 1;
	v_positiony = 1;
	if (x <= 0 || y <= 0)
		return ;
	f_print('A', 'B', x, v_positionx);
	v_positiony++;
	while (v_posiciony < y)
	{
		f_imprimir ('B', ' ', x, v_positionx);
		v_posiciony++;
	}
	if (y > 1)
		f_print ('C', 'B', x, v_positionx);
}
