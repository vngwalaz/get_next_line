/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 10:38:58 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/06/16 13:16:55 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stddef.h>

int		ft_isalnum(int c);
int		ft_isprint(int c);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_toupper(char *str);
int		ft_isalpha(int c);
int		ft_strcmp(char *str1, char *str2);
int		ft_atoi(const char *str);
int		ft_isascii(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strncpy(char *dest, char *src, size_t n);
int		ft_isdigit(int c);
void	*ft_memmove(void *dest, const void *src, size_t len);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strstr(char *str, char *to_find);
void    *ft_memset(void *str_b, int byts_src, size_t len);
void	*ft_memchr(const void *str, int c, size_t n);
void	ft_bzero(void *str, size_t len);
char	*ft_strcat(char *str1, const char *str2);
char	*ft_strdup(char *src);
void	*ft_memccpy(void *dest, const void *src, int c, size_t len);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*f_titoa(int n);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
void	ft_strclr(char *s);
void	ft_putnbr(int nb);
void	ft_strdel(char **as);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putendl(char const *s);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_strequ(char const *s1, char const *s2);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strnew(size_t size);
char	**ft_strsplit(char const *s, char c);
char	*ft_strtrim(char const *s);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
char	*ft_strrchr(const char *s, int c);
int		main(void);

#endif
