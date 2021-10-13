/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:26:45 by oarnoldo          #+#    #+#             */
/*   Updated: 2021/10/13 17:36:04 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_lib.h"

char	*ft_strdup(const char *str)
{
	char	*res;
	int		i;

	i = -1;
	res = ft_calloc(ft_strlen(str) + 1, sizeof(char));
	if (res)
	{
		while (str[++i])
		{
			res[i] = str[i];
		}
		res[i] = '\0';
	}
	return (res);
}
