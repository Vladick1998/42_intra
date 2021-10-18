/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 01:03:45 by oarnoldo          #+#    #+#             */
/*   Updated: 2021/10/18 16:27:32 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ищет последнее вхождение символа в строке
*/
#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*lst;

	lst = NULL;
	while (*s)
	{
		if (*s == (char)c)
			lst = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (lst);
}
