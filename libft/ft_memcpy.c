/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:04:32 by oarnoldo          #+#    #+#             */
/*   Updated: 2021/10/12 20:56:45 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_lib.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)destination;
	s = (unsigned char *)source;
	if (d || s)
	{
		while (n--)
			*d++ = *s++;
	}
	return (destination);
}
