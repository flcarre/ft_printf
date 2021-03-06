/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 11:09:13 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/07 17:28:38 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

char	*ft_lltoa(int64_t n)
{
	unsigned int	i;
	uint64_t		x;
	char			*tmp;

	i = ft_digitlen(n, 10);
	if (!(tmp = ft_strnew((unsigned long)i)))
		return ((void *)0);
	*tmp = (n < 0) ? '-' : '\0';
	x = n;
	while ((n < 0) ? (--i) : (i--))
	{
		*(tmp + i) = '0' + x % 10;
		x /= 10;
	}
	return (tmp);
}
