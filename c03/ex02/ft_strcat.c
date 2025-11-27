/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsainz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 16:33:40 by lsainz-d          #+#    #+#             */
/*   Updated: 2025/11/20 16:06:28 by lsainz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;
	int	pos;

	pos = 0;
	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	while (pos < j)
	{
		dest[i + pos] = src[pos];
		pos++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[] = "raton";
	char	src[] = "gato";
	
	ft_strcat(dest, src);
	printf("%s\n", dest);
	return (0);
}*/
