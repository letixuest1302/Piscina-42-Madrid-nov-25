/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsainz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:01:08 by lsainz-d          #+#    #+#             */
/*   Updated: 2025/11/11 11:35:32 by lsainz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = c / *b;
	*b = c % *b;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d", a, b);
	return (0);
}*/
