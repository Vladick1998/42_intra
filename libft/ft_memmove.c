/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:44:06 by oarnoldo          #+#    #+#             */
/*   Updated: 2021/10/18 16:04:38 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	заменяет кусок памяти в destination куском памяти из source
*/
#include"libft.h"

void	*ft_memmove(void *destination, const void *source, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)destination;
	s = (unsigned char *)source;
	if (!d && !s)
		return (0);
	if (d < s)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	return (destination);
}
