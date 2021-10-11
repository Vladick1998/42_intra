/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:30:21 by oarnoldo          #+#    #+#             */
/*   Updated: 2021/10/11 16:58:22 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/ft_lib.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int				i;
	unsigned char	*tmp;

	i = 0;
	tmp = str;
	while (tmp[i] && i < n)
		tmp[i++] = c;
	return (tmp);
}
