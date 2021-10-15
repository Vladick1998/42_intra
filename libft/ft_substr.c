/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 02:23:41 by marvin            #+#    #+#             */
/*   Updated: 2021/10/15 17:29:28 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_lib.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;
	int		q;

	i = 0;
	q = 0;
	str = malloc(sizeof(char *) * (len + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		if (s[i] >= start && q < len)
		{
			str[q] = s[i];
			q++;
		}
		i++;
	}
	str[q] = '\0';
	return (str);
}
