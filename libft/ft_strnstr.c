/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:57:16 by oarnoldo          #+#    #+#             */
/*   Updated: 2021/10/13 16:08:03 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_lib.h"

char	*ft_strstr(const char *strB, const char *strA)
{
	int	i;

	while (*strB++ && *strA++)
	{
		if (*strB == *strA)
		{
			i = 1;
			while (*strB)
			{
				if (strB != strA[i])
					break ;
				strB++;
				i++;
				if (strA[i] == '\0')
					return (*strB);
			}
		}
	}
	return (NULL);
}
