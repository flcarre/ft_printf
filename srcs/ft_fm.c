/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fm.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 12:40:01 by flcarre           #+#    #+#             */
/*   Updated: 2019/01/16 21:40:45 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_glo.h"

void ft_fm(t_id *e)
{
	int		b;
	int		i;
	char	*tmp

	b = 1;
	i = 0;
	if (id[0] == 'p' || ((e->fm & 16) == 16) && (id[0] == 'x' || id[0] == 'X'))
		e->w[0] -= (e->w[0] >= 2) ? 2 : e->w[0];
	else if ((e->fm & 16) == 16 && id[0] == 'o')
		e->w[0] -= (e->w[0] >= 1) ? 1 : e->w[0];
	while (++i <= 5)
		glo_fm[i - 1](e);
	if (id[0] == 'p')
	{
		tmp = e->s;
		e->s = ft_strjoin("0x", e->s);
		ft_memdel(&tmp);
	}
}
