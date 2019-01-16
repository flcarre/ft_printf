/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 16:12:52 by flcarre           #+#    #+#             */
/*   Updated: 2019/01/16 17:23:24 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_id		*ft_newid(void)
{
	t_id *new;

	if (!(new = (t_id *)ft_memalloc(sizeof(t_id))))
		return ((void *)0);
	new->pos = 0;
	new->fm = 0;
	new->w[0] = 0;
	new->w[1] = 0;
	new->w[2] = 0;
	new->p[0] = 0;
	new->p[1] = 0;
	ft_bzero((void *)new->id, 10);
	new->arg.i = 0;
	new->next = (void *)0;
	return (new);
}
