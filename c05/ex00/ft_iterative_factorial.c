/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsainz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 18:55:10 by lsainz-d          #+#    #+#             */
/*   Updated: 2025/11/25 17:46:36 by lsainz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("Factoriall de -1 = %d\n", ft_iterative_factorial(-1));
	printf("Factoriall de 0 = %d\n", ft_iterative_factorial(-0));
	printf("Factoriall de 5  = %d\n", ft_iterative_factorial(5));
	printf("Factoriall de 1 = %d\n", ft_iterative_factorial(1));
}*/
