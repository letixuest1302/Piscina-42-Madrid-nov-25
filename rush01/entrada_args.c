/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entrada_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:44:10 by vabad-ro          #+#    #+#             */
/*   Updated: 2025/11/16 12:00:11 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_matriz(void);
char	arg_filter(char *str);

int	main(int argc, char *argv[])
{
	int	arc;
	
	arc = 2;
	if (argc != 2)
	{
		printf("Error en el número de argumentos");
		return (1);		
	}
	else
	printf("EL NÚMERO DE ARGUMENTOS SON VÁLIDOS");	
	comprobacion_args(argv);

	ft_matriz();
	return (0);
}
	// idk if this works
	//we are taking the second arg (the string) and the first postion?
