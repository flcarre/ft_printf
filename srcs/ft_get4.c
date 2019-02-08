/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 21:22:08 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/07 21:29:20 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_get15(t_id *e)
{
	(e->id[0] == '{') ? ft_color(e) : 0;
	(e->id[0] == '%') ? (e->s = ft_strdup("%")) : 0;
	return ((e->s) ? 0 : -1);
}