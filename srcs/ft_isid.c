/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 14:53:37 by flcarre           #+#    #+#             */
/*   Updated: 2018/12/20 14:55:01 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isid(char c)
{
	if (c == 'c' || c == 's' || c == 'p' )
		return (1);
	if (c == 'd' || c == 'c' || c == 'o' || c == 'u' || c == 'x' || c == 'X')
		return (2);
	if (c == 'e' || c == 'g' || c == 'f')
		return (3);
	if (c == '%')
		return (4);
	return (0;)
}