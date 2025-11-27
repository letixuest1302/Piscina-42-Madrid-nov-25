/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsainz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:33:02 by lsainz-d          #+#    #+#             */
/*   Updated: 2025/11/25 15:14:40 by lsainz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	number;

	number = 1;
	if (nb > 0)
	{
		while (number * number < nb)
			number++;
		if (number * number == nb)
			return (number);
	}
	return (0);
}
/*
int	main(void)
{
	int	nb;

	printf("raiz cuadrda: ");
	scanf("%d", &nb);
	nb = ft_sqrt(nb);
	printf("resultado: %d", nb);
	return (0);
}*/
