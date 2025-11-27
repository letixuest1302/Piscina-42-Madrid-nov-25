/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 13:40:55 by ciparren          #+#    #+#             */
/*   Updated: 2025/11/23 19:21:27 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_validate_args(int argc, char **argv, char **dict_path)
{
	if (argc < 2 || argc > 3)
		return (0);
	if (argc == 2)
	{
		*dict_path = "numbers.dict";
		//*number = ft_atoi(argv[1]);
	}
	else
	{
		*dict_path = argv[1];
		//*number = ft_atoi(argv[2]);
	}
	// igual aquí habría que validar el string de entrada
	// validate_argv o algo así
	return (1);
}

int	ft_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (!str || !str[0])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	return (0);
}
