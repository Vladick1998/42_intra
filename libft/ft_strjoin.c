/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:30:48 by oarnoldo          #+#    #+#             */
/*   Updated: 2021/10/15 17:39:21 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_lib.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;
	int		i;
	int		q;

	i = 0;
	temp = (char *)malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	while (strlen(s1) > i)
		temp[i] = s1[i++];
	q = 0;
	while (strlen(s2) > q)
		temp[i++] = s2[q++];
	temp[i] = '\0';
	return (temp);
}
