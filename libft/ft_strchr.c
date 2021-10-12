/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:06:36 by oarnoldo          #+#    #+#             */
/*   Updated: 2021/10/12 20:43:00 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_lib.h"

char	*ft_strchr(char *str, int c)
{
	while (str)
	{
		if (str[0] == c)
		{
			return (str);
		}
		str++;
	}
	if (c == '\0')
		return (str);
	else
		return (NULL);
}
