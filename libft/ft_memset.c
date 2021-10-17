/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:30:21 by oarnoldo          #+#    #+#             */
/*   Updated: 2021/10/17 00:34:35 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int				i;
	unsigned char	*tmp;

	i = 0;
	tmp = str;
	while (n--)
		tmp[i++] = c;
	return (tmp);
}
