/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 08:59:56 by agraille          #+#    #+#             */
/*   Updated: 2024/11/08 15:30:12 by agraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char			*ft_strnstr(const char *str1, const char *str2, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strrchr(const char *str, int ch);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strdup(char *src);
char			*ft_strchr(const char *s, int c);
char			*ft_itoa(int n);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
void			ft_bzero(void *s, size_t n);
void			*ft_memset(void *s, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *ptr, int value, size_t num);
void			*ft_calloc(size_t number_elements, size_t size_element);
int				ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
int				ft_isprint(int c);
int				ft_isdigit(int c);
int				ft_isascii(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_strlen(const char *s);
int				ft_atoi(const char *str);
int				ft_strncmp(char *s1, char *s2, unsigned int n);

#endif
