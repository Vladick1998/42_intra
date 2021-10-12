/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:06:36 by oarnoldo          #+#    #+#             */
/*   Updated: 2021/10/12 21:03:12 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_lib.h"

char	*ft_strchr(char *str, int c)
{
	if (c == '\0')
		return (str);
	while (str != '\0')
	{
		if (str[0] == c)
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}
