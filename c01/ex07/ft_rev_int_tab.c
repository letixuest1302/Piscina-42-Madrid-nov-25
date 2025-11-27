/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsainz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:51:14 by lsainz-d          #+#    #+#             */
/*   Updated: 2025/11/11 17:40:45 by lsainz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <unistd.h>
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}
/*
int	main(void)
{
	int	tab[6] = {0, 1, 2, 3, 4, 5};
	int	size;
	int	i;

	i = 0;
	size = 6;
	ft_rev_int_tab(tab, size);
	i = 0;

	while (i < size)
	{
		printf("%d", tab[i]);
		if (i < size -1)
		{
			printf(",");
		}
		i++;
	}
}*/
