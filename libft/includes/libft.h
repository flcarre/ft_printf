/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:44:47 by lutsiara          #+#    #+#             */
/*   Updated: 2018/12/18 20:53:52 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef struct		s_list
{
	void			*content;
	unsigned long	content_size;
	struct s_list	*next;
}					t_list;

int					ft_dclassify(double x);
int					ft_ldclassify(long double x);
long double			ft_ldmod(long double x, long double mod);
double				ft_dmod(double x, double mod);
double				ft_dfrexp(double x, int *p);
long double			ft_ldfrexp(long double x, int *p);
double				ft_dexp(double x, int e);
long double			ft_ldexp(long double x, int e);
char				*ft_ldtoa(long double x);
unsigned long		ft_abs(long x);
double				ft_dabs(double x);
long double			ft_ldabs(long double x);
long				ft_pow(long x, unsigned int n);
void				*ft_memset(void *b, int c, unsigned long len);
void				ft_bzero(void *s, unsigned long n);
void				*ft_memcpy(void *dst, const void *src, unsigned long n);
void				*ft_memccpy(void *dst, const void *src, int c, \
					unsigned long n);
void				*ft_memmove(void *dst, const void *src, unsigned long len);
void				*ft_memchr(const void *s, int c, unsigned long n);
int					ft_memcmp(const void *s1, const void *s2, unsigned long n);
void				*ft_memalloc(unsigned long size);
void				ft_memdel(void **ap);
char				*ft_strnew(unsigned long size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
unsigned long		ft_strlen(const char *s);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, unsigned long len);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, unsigned long n);
unsigned long		ft_strlcat(char *dst, const char *src, unsigned long size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack, const char *needle, \
					unsigned long len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, unsigned long n);
int					ft_atoi(const char *str);
int					ft_isspace(int c);
int					ft_isdigit(int c);
int					ft_isalpha(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_islower(int c);
int					ft_isupper(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, unsigned long n);
char				*ft_strsub(char const *s, unsigned int start, \
					unsigned long len);
char				*ft_strjoin(char const *s1, char const *s2);
int					ft_iswhitespace(int c);
char				*ft_strtrim(char const *s);
unsigned long		ft_countword(char const *s, char c);
char				**ft_strtabnew(unsigned long size);
void				*ft_strtabdel(char ***as);
char				**ft_strsplit(char const *s, char c);
unsigned int		ft_digitlen(int n, int base);
unsigned int		ft_ld_ldiglen(long double n, long double base);
unsigned int		ft_d_ldiglen(double n, double base);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr(char const *s);
void				ft_putwchar(int wc);
void				ft_putwstr(int *ws);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
t_list				*ft_lstnew(void const *content, unsigned long content_size);
void				ft_lstdelone(t_list **alst, \
					void (*del)(void *, unsigned long));
void				ft_lstdel(t_list **alst, \
					void (*del)(void *, unsigned long));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_delcontent(void *content, unsigned long content_size);
void				ft_lstenqueue(t_list **list, t_list *elem);
t_list				*ft_lstdupone(t_list *elem);
t_list				*ft_lstdup(t_list *list);
t_list				*ft_lstipos(t_list *list, unsigned long i);

#endif
