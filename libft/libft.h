/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 12:39:26 by bgumede           #+#    #+#             */
/*   Updated: 2018/06/18 16:10:00 by bgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <ctype.h>

void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	ft_putchar_fd(char c, int fd);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memalloc(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_putstr(char const *str);
void	ft_putstr_fd(char const *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
int		ft_memcmp(const void *dst, const void *src, size_t n);
void	ft_putendl(char const *s);
void	ft_putendl_fd(const char *s, int fd);
void	ft_memdel(void **ap);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *s1, const char *s2);
char	*ft_strchr(const char *s, int c);
char	*ft_itoa(int n);
int		ft_atoi(const char *str);
char	*ft_strrchr(char const *s, int c);
char	*ft_strncpy(char *dst, const char *src, size_t n);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnew(size_t size);
char	*ft_strtrim(const char *s);
char	**ft_strsplit(char const *s, char c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_putnbr(int n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
void	ft_putnbr_fd(int n, int fd);
int		ft_isalpha(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
int		ft_strequ(char const *s1, char const *s2);
void	ft_putchar(char c);
#endif
