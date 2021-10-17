/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:47:27 by oarnoldo          #+#    #+#             */
/*   Updated: 2021/10/17 00:34:35 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	unsigned char	*b1;
	unsigned char	*b2;

	b1 = (unsigned char *) buf1;
	b2 = (unsigned char *) buf2;
	while (count--)
	{
		if (*b1 != *b2)
		{
			return (*b1 - *b2);
		}
		b1++;
		b2++;
	}
	return (0);
}
