/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsainz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:12:39 by lsainz-d          #+#    #+#             */
/*   Updated: 2025/11/18 18:26:26 by lsainz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	arr1[5] = "sdfgh";
	char	arr2[5] = "ApeL";

	printf("%d\n", ft_str_is_lowercase(arr1));
	printf("%d\n", ft_str_is_lowercase(arr2));
	printf("%d\n", ft_str_is_lowercase(""));
	return (0);
}*/
