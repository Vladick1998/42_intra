/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:57:16 by oarnoldo          #+#    #+#             */
/*   Updated: 2021/10/18 17:32:39 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ищет первое вхождение строки src в строке dest
*/
#include"libft.h"

char	*ft_strnstr(const char *dest, const char *src, size_t len)
{
	char	*h;
	size_t	srclen;
	size_t	q;
	size_t	i;

	h = (char *)dest;
	srclen = ft_strlen(src);
	if (!srclen)
		return (h);
	if (ft_strlen(dest) < srclen || len < srclen)
		return (NULL);
	i = 0;
	while (h[i] && i <= len - srclen)
	{
		q = 0;
		while (src[q] && src[q] == h[i + q])
			q++;
		if (q == srclen)
			return (&h[i]);
		i++;
	}
	return (NULL);
}
