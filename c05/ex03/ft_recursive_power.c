/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsainz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:21:54 by lsainz-d          #+#    #+#             */
/*   Updated: 2025/11/25 17:48:49 by lsainz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 1)
		return (nb);
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power (nb, power -1));
}
/*
int	main(void)
{
	int	nb;
	int	power;
	int	result;

	nb = 5;
	power = 0;
	printf("numero base: \n");
	printf("%d\n", nb);
	printf("exponente: \n");
	printf("%d\n", power);
	result = ft_recursive_power(nb, power);
	printf("resultado es: %d", result);
	return (0);
}*/
