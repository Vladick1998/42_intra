/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:18:54 by oarnoldo          #+#    #+#             */
/*   Updated: 2021/10/13 17:24:24 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_lib.h"

void	*ft_calloc(size_t number, size_t size)
{
	char	*res;

	res = malloc(number * size);
	if (res)
		ft_memset(res, 0, number * size);
	return (res);
}
