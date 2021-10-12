/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:44:06 by oarnoldo          #+#    #+#             */
/*   Updated: 2021/10/12 21:08:40 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_lib.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)destination;
	s = (unsigned char *)source;
	while (n--)
		*d++ = *s++;
	return (destination);
}
