/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 15:49:01 by lutsiara          #+#    #+#             */
/*   Updated: 2018/12/28 22:43:08 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_pow(long x, unsigned int n)
{
	if (!n)
		return (1);
	return (x * ft_pow(x, n - 1));
}
