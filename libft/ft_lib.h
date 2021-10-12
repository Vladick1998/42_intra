/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:53:21 by oarnoldo          #+#    #+#             */
/*   Updated: 2021/10/12 21:53:18 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H

# include <stdio.h>
# include <string.h>
# include <ctype.h>

void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(const void *arr, int c, size_t n);
int		ft_memcmp(const void *buf1, const void *buf2, size_t count);
void	*ft_memcpy(void *destination, const void *source, size_t n);
void	*ft_memmove(void *destination, const void *source, size_t n);
void	*ft_memset(void *str, int c, size_t n);
char	*ft_strchr(char *str, int c);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t count);
int		ft_tolower(int c);
int		ft_toupper(int c);
#endif
