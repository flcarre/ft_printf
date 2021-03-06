/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 18:07:32 by lutsiara          #+#    #+#             */
/*   Updated: 2019/02/07 21:44:06 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/includes/libft.h"
# include <stdarg.h>
# include <wchar.h>

typedef union				u_var
{
		int					i;
		char				c;
		short				s;
		long				l;
		long long			ll;
		wint_t				w;
		double				d;
		long double			ld;
		void				*p;
		char				*cp;
		wchar_t				*wp;
		unsigned int		ui;
		unsigned char		uc;
		unsigned short		us;
		unsigned long		ul;
		unsigned long long	ull;
}							t_var;

typedef struct				s_id
{
	unsigned int			pos;
	unsigned char			fm;
	unsigned int			w[2];
	unsigned int			p[3];
	char					infnan;
	char					lm[3];
	char					id[10];
	char					*s;
	wchar_t					*ws;
	char					sign;
	t_var					arg;
	struct s_id				*next;
}							t_id;

int							ft_printf(const char *format, ...);
t_id						*ft_parse(char *fmt, t_list **s);
t_id						*ft_newid(void);
void						ft_delid(t_id **list);
void						ft_enqueueid(t_id **list, t_id *e);
int							ft_idisnull(t_id *list);
unsigned int				ft_idpos(t_id *list);
unsigned long				ft_parseid(char *id, t_id **list, \
							unsigned long *i, unsigned int *pos);
int							ft_storetolist(char *s, unsigned long *i, \
							t_list **str);
int							ft_isid(char c);
int							ft_isfm(char c);
int							ft_islm(char *s);
void						ft_iscolor(unsigned long *i, char *s, t_id *e);
void						ft_lmprocess(char *f, char *lm, unsigned long *i);
int							ft_getarg(va_list args, t_id *e);
int							ft_get0(va_list arg, unsigned int i, t_var *u, \
							t_id *e);
int							ft_get1(va_list arg, unsigned int i, \
							t_var *u, t_id *e);
int							ft_get2(va_list arg, unsigned int i, \
							t_var *u, t_id *e);
int							ft_get3(va_list arg, unsigned int i, \
							t_var *u, t_id *e);
int							ft_get4(va_list arg, unsigned int i, \
							t_var *u, t_id *e);
int							ft_get5(va_list arg, unsigned int i, \
							t_var *u, t_id *e);
int							ft_get6(va_list arg, unsigned int i, \
							t_var *u, t_id *e);
int							ft_get7(va_list arg, unsigned int i, \
							t_var *u, t_id *e);
int							ft_get8(va_list arg, unsigned int i, \
							t_var *u, t_id *e);
int							ft_get9(va_list arg, unsigned int i, \
							t_var *u, t_id *e);
int							ft_get10(va_list arg, unsigned int i, \
							t_var *u, t_id *e);
int							ft_get11(va_list arg, unsigned int i, \
							t_var *u, t_id *e);
int							ft_get12(va_list arg, unsigned int i, \
							t_var *u, t_id *e);
int							ft_get13(va_list arg, unsigned int i, \
							t_var *u, t_id *e);
int							ft_get14(va_list arg, unsigned int i, \
							t_var *u, t_id *e);
int							ft_get15(t_id *e);
void						ft_color(t_id *e);
int							ft_precprocess(t_id *e);
void						ft_eprocess(t_id *e);
void						ft_erounding(char **str, unsigned int n);
int							ft_fm(t_id *e);
void						ft_zero(t_id *e);
void						ft_dies(t_id *e);
void						ft_space(t_id *e);
void						ft_plus(t_id *e);
void						ft_minus(t_id *e);
int							ft_signconv(char c);
int							ft_widthprocess(t_id *e);
void						ft_print(t_id **e, t_list **l, int *r);

#endif
