/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsainz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:44:46 by lsainz-d          #+#    #+#             */
/*   Updated: 2025/11/25 17:49:33 by lsainz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}
/*
int	main(void)
{
	int	index;
	int	result;

	index = 0;
	printf("Index: ");
	scanf("%d", &index);
	result = ft_fibonacci(index);
	printf("F(%d) = %d\n", index, result);
}*/
