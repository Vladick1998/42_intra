/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:01:10 by oarnoldo          #+#    #+#             */
/*   Updated: 2021/10/12 20:43:00 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_lib.h"

int	ft_strncmp(const char *str1, const char *str2, size_t count)
{
	int	i;

	i = 0;
	while (str1[i] || i < count)
	{
		if (str1[i] != str2[i])
		{
			if (str1[i] > str2[i])
			{
				return (1);
			}
			else
				return (-1);
		}
		i++;
	}
	return (0);
}
