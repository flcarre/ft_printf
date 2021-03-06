/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ull.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 17:35:14 by lutsiara          #+#    #+#             */
/*   Updated: 2019/01/23 17:44:14 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

char	*ft_ull(unsigned long long x, char *s)
{
	unsigned long	y;

	while (x > ULONG_MAX)
	{
		*(--s) = '0' + x % 10;
		x /= 10;
	}
	y = x;
	while (y)
	{
		*(--s) = '0' + y % 10;
		y /= 10;
	}
	return (s);
}
