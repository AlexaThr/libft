/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athorne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 17:16:45 by athorne           #+#    #+#             */
/*   Updated: 2019/04/29 18:00:09 by athorne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct  s_list
    {
    void   *content;
    size_t  content_size;
    struct s_list   *next;
    }           t_list;

char	*ft_toupper(char *str);
char	*ft_tolower(char *str);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_strlen(char *str);
char	*ft_strdup(char *src);
char	*ft_strcpy(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int     ft_isalnum (int c);
int     ft_isalpha (int c);
int     ft_isascii (int c);
int     ft_isdigit (int c);
int     ft_isprint (int c);
char	*ft_itoa(int n);
void    *ft_memalloc (size_t size);
void    ft_memdel (void **ap);
void    ft_putchar_fd (char c, int fd);
void    ft_putchar(char c);
void    ft_putendl_fd (char const *s, int fd);
void    ft_putendl (char const *s);
void    ft_putnbr_fd (int n, int fd);
void    ft_putnbr (int n);
void    ft_putstr_fd (char const *s, int fd);
void    ft_putstr(char const *s);
char    *ft_strcat (char *dest, const char *src);
char    *ft_strchr(char *str, int ch);
void    ft_strclr (char *s);
void    ft_strdel (char **as);
int     ft_strequ (char const *s1, char const *s2);
void    ft_striter (char *s, void (*f)(char *));
void    ft_striteri(char *s, void (*f)(unsigned int, char *));
char    *ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char    * ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char    *ft_strncat (char *dest, const char *src, size_t n);
int     ft_strnequ (char const *s1, char const *s2, size_t n);
char    * ft_strnew (size_t size);
char    *ft_strnstr (const char *str, const char *to_find, size_t len);
char	*ft_strrchr(char *str, int ch);
char    **ft_strsplit (char const *s, char c);
char	*ft_strsub (char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s);
void	ft_lstadd(t_list **alst, t_list *new);
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list  *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list	*ft_lstnew(void const *content, size_t content_size);


