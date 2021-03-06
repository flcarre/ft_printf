/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parseid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 18:25:46 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/08 03:39:00 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_prec(unsigned long *i, char *id, t_id *e, unsigned int *pos)
{
	if (id[i[0]] != '.' && (e->p[2] = 1))
		return ;
	i[0]++;
	if (id[i[0]] == '*')
	{
		e->p[1] = *pos;
		i[0]++;
		(*pos)++;
		e->pos = *pos;
	}
	else
	{
		e->p[0] = ft_atoui(id + i[0]);
		i[0] += (e->p[0] != 0 || id[i[0]] == '0') ? \
		ft_udigitlen(ft_atoui(id + i[0]), 10) : 0;
	}
}

static void		ft_width(unsigned long *i, char *id, t_id *e, unsigned int *pos)
{
	if (id[i[0]] == '*')
	{
		e->w[1] = *pos;
		i[0]++;
		(*pos)++;
		e->pos = *pos;
	}
	else
	{
		e->w[0] = ft_atoui(id + i[0]);
		i[0] += (e->w[0] != 0 || id[i[0]] == '0') ? \
		ft_udigitlen(ft_atoui(id + i[0]), 10) : 0;
	}
}

unsigned long	ft_parseid(char *id, t_id **list, unsigned long *i, \
				unsigned int *pos)
{
	t_id				*e;

	if (!(e = ft_newid()))
		return (1);
	ft_enqueueid(list, e);
	i[0]++;
	(ft_isid(id[i[0]]) == 5) ? ft_iscolor(i, id, e) : \
	(e->id[0] = (ft_isid(id[i[0]]) == 4 && (i[1] = ++i[0])) ? '%' : e->id[0]);
	if (e->id[0])
		return (0);
	e->pos = ++(*pos);
	while (id[i[0]] && ft_isfm(id[i[0]]))
	{
		e->fm |= ft_isfm(id[i[0]]);
		i[0]++;
	}
	ft_width(i, id, e, pos);
	ft_prec(i, id, e, pos);
	ft_lmprocess(id + i[0], e->lm, i);
	e->id[0] = (ft_isid(id[i[0]])) ? id[i[0]] : '\0';
	i[0] += (ft_isid(id[i[0]])) ? 1 : 0;
	i[1] = i[0];
	return (0);
}
