/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comprobacion_args.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:26:48 by vabad-ro          #+#    #+#             */
/*   Updated: 2025/11/16 11:41:26 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	arg_filter(char *str)
{
	int	i;
	
	i = 0;
	while ( i != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4' || str[i] == ' ')
		{
			printf("Se necesitan numeros entre 1 y 4");
			i++;
		}
		else if (str[i] >= '0' && str[i] >= '4' || str[i] == ' ')
		{
			printf("Se necesitan números entre el 0 y el 4");
			i++;
		}
		else
			printf("EL NÚMERO DE ARGUMENTOS SON VÁLIDOS");
	}
	return (str);
}
