/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:30:48 by oarnoldo          #+#    #+#             */
/*   Updated: 2021/10/17 01:58:52 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;
	int		i;
	int		q;

	if (!s1 || !s2)
		return (0);
	temp = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!temp)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		temp[i] = s1[i];
		i++;
	}
	q = 0;
	while (s2[q] != '\0')
		temp[i++] = s2[q++];
	temp[i] = '\0';
	return (temp);
}
