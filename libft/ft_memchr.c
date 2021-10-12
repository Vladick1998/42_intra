/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:32:09 by oarnoldo          #+#    #+#             */
/*   Updated: 2021/10/12 21:40:04 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_lib.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	ch;

	a = (unsigned char *) arr;
	ch = (unsigned char ) c;
	while (n--)
	{
		if (*a == ch)
			return (a);
		a++;
	}
	return (NULL);
}
