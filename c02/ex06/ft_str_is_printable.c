/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsainz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 11:34:27 by lsainz-d          #+#    #+#             */
/*   Updated: 2025/11/18 12:36:21 by lsainz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	arr1[5]= "uiop";
	char	arr2[5]= "BfdE";

	printf("%d\n", ft_str_is_printable(arr1));
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("ñ"));
	return(0);
}*/
