/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsainz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 19:43:11 by lsainz-d          #+#    #+#             */
/*   Updated: 2025/11/07 11:02:03 by lsainz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

int	main(void)
{
	ft_is_negative(0);
	return (0);
}

/*void	ft_is_negative(int n)
{
	char	a;

	if (n >= 0)
		a = 'P';
	else
		a = 'N';
	write(1, &a, 1);
}*/
