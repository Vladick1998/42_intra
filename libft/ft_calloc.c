/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:18:54 by oarnoldo          #+#    #+#             */
/*   Updated: 2021/10/18 17:32:39 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	выделяет память и заполняет ее 0
*/
#include"libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	char	*res;

	res = malloc(number * size);
	if (res)
		ft_memset(res, 0, number * size);
	return (res);
}
