/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:20:30 by namorgha          #+#    #+#             */
/*   Updated: 2023/02/08 00:23:11 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define BUFFER_SIZE 1

# include <stdlib.h>
# include <unistd.h>

int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isalnum(int i);
int		ft_isdigit(char *c);
int		new_line(char *ptr);
char	*strjoin(char *s1, char *s2);
size_t	ft_strleen(char *s);
char	*get_next_line(int fd);
char	*get_new_line(char *s1);
char	*get_last(char *s1);
int		ft_isalpha(int i);
int		ft_isascii(int i);
int		ft_isprint(int i);
int		ft_strcmp(char *s1, char *s2);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void	ft_bzero(void *s, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *s, int c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_calloc(size_t count, size_t size);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memset(void *b, int c, size_t len);
long	ft_atoi(const char *str);
char	*ft_strchr(const char *s, int c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

#endif
