/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtennero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 15:25:20 by vtennero          #+#    #+#             */
/*   Updated: 2017/07/22 12:24:07 by vtennero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include "libft.h"
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

size_t	ft_strlen(const char *s);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
void	ft_putstr(char *str);
void	ft_putstr_fd(char *str, int fd);
char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strcat(char *s1, const char *s2);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
void	*ft_memset(void *b, int c, size_t n);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *big, const char *little);
char	*ft_strnstr(const char *big, const char *little, size_t len);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_strclr(char *s);
char	*ft_strnew(size_t size);
void	ft_striter(char *s, void (*f)(char *));
void	ft_putnbr(int n);
void	*ft_memalloc(size_t size);
void	*ft_bzero(void *b, size_t n);
char	*ft_strdup(const char *s1);
void	ft_memdel(void **ap);
void	ft_strdel(char **as);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	**ft_strsplit(char const *s, char c);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strtrim(char const *s);
char	*ft_itoa(int n);
int		ft_atoi(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);

#endif
