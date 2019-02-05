/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gprocess.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 13:40:14 by flcarre           #+#    #+#             */
/*   Updated: 2019/02/05 17:56:50 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_addsuffixe(t_id *e, int pow, unsigned int i)
{
	char			*tmp;
	char			s[4];
	char			*a;

	ft_bzero((void *)s, 4);
	s[0] = 'e';
	s[1] = (pow) ? '-' : '+';
	s[2] = (i - 1 < 10) ? '0' : s[2];
	tmp = e->s;
	e->s = ft_strjoin(e->s, s);
	ft_memdel((void **)&tmp);
	a = ft_itoa((int)(i - 1));
	tmp = e->s;
	e->s = ft_strjoin(e->s, a);
	ft_memdel((void **)&tmp);
	ft_memdel((void **)&a);
}

static void	ft_movedot(char *s, unsigned int i, unsigned int x)
{
	char			tmp;

	while (i > x)
	{
		tmp = s[i];
		s[i] = s[i - 1];
		s[i - 1] = tmp;
		i--;
	}
}
void		ft_gprocess(t_id *e)
{
	unsigned int	i;

	i = 0;
	while (e->s[i] && e->s[i] != '.')
		i++;
	if (i > e->p[0])
		ft_movedot(e->s, i, 1);
	if (!e->p[0] && (e->fm & 16) != 16)
		e->s[(i > 1) ? 1 : i] = '\0';
	ft_addzero(e, ft_strlen(e->s) - 2);
	ft_addsuffixe(e, pow, i);
}
