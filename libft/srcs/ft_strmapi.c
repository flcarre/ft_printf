/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:03:28 by lutsiara          #+#    #+#             */
/*   Updated: 2018/11/13 15:14:11 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*tmp;
	unsigned int	i;

	if (!s || !f)
		return ((void *)0);
	if (!(tmp = ft_strnew(ft_strlen(s))))
		return ((void *)0);
	i = 0;
	while (*s)
	{
		*(tmp + i) = f(i, *(s++));
		i++;
	}
	return (tmp);
}
