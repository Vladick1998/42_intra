/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 01:33:25 by oarnoldo          #+#    #+#             */
/*   Updated: 2021/10/17 02:58:54 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	q;

	if (!s)
		return (NULL);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	i = start;
	q = 0;
	while (s[i] && q < len && i < ft_strlen(s))
	{
		str[q] = s[i];
		q++;
		i++;
	}
	str[q] = '\0';
	return (str);
}
