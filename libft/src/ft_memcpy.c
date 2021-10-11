/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:04:32 by oarnoldo          #+#    #+#             */
/*   Updated: 2021/10/11 16:57:00 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/ft_lib.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	int				i;

	i = -1;
	d = (unsigned char *)destination;
	s = (unsigned char *)source;
	while (++i < n)
		d[i] = s[i];
	return (destination);
}
