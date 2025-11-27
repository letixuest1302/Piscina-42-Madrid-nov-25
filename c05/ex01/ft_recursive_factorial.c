/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsainz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 10:18:40 by lsainz-d          #+#    #+#             */
/*   Updated: 2025/11/25 19:06:59 by lsainz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb -1));
}
/*
int	main(void)
{
	int	test_nb1 = 5;
	int	test_nb2 = 1;
	int	test_nb3 = 0;
	int	test_nb4 = 10;
	int	test_nb5 = -3;
	
	printf("Resultado para 5: %d\n", ft_recursive_factorial(test_nb1));
	printf("Resultado para 1: %d\n", ft_recursive_factorial(test_nb2));
	printf("Resultado para 0: %d\n", ft_recursive_factorial(test_nb3));
	printf("Resultado para 10: %d\n", ft_recursive_factorial(test_nb4));
	printf("Resultado para -3: %d\n", ft_recursive_factorial(test_nb5));
	return (0);
}*/
