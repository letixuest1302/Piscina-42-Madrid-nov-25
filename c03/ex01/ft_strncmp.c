/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsainz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:48:51 by lsainz-d          #+#    #+#             */
/*   Updated: 2025/11/20 14:12:25 by lsainz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n)
		i++;
	if (i < n)
		return (s1[i] - s2[i]);
	else
		return (0);
}
/*
int	main(void)
{
	char	cadena[] = "ABA";
	char	compara[] = "ABZ";
	int	rpta;

	rpta = ft_strncmp(&cadena[0], &compara[0], 3);
	printf("%d\n", rpta);
	return (0);
}*/
