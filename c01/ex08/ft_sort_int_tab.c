/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsainz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:57:44 by lsainz-d          #+#    #+#             */
/*   Updated: 2025/11/12 16:36:38 by lsainz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size);

int     main(void)
{
        int     tab[] = {3, 5, 1, 4, 3, 7};
        int     i;

        ft_sort_int_tab(tab, 6);
        i = 0;
	while (i < 6)
        {
                printf("%d", tab[i]);
                i++;
        }
	return (0);
}
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	num;

	i = 0;
	while (i < (size -1))
	{
		j = 0;
		while (j < (size - i - 1))
		{
			if (tab[j] > tab[j + 1])
			{
				num = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = num;
			}
			j++;
		}
		i++;
	}
}
