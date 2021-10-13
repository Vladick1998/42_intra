/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:16:16 by oarnoldo          #+#    #+#             */
/*   Updated: 2021/10/13 17:01:47 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_lib.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		t1;
	size_t		t2;

	i = 0;
	t1 = ft_strlen(dst);
	t2 = ft_strlen(src);
	if (size - 1 <= t1)
		return (t2 + size);
	while (t1 + i < size - 1)
	{
		dst[t1 + i] = src[i];
		i++;
	}
	dst[t1 + i] = '\0';
	return (t1 + t2);
}
