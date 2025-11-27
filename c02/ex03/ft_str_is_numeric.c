/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsainz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 17:42:10 by lsainz-d          #+#    #+#             */
/*   Updated: 2025/11/17 18:11:19 by lsainz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	arr1[5] = "1234";
	char	arr2[5] = "abcd";

	printf("%d\n", ft_str_is_numeric(arr1));
	printf("%d\n", ft_str_is_numeric(arr2));
	printf("%d\n", ft_str_is_numeric("");
	return (0);
}*/
