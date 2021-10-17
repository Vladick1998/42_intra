/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:49:27 by marvin            #+#    #+#             */
/*   Updated: 2021/10/17 00:34:35 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_trim_start_end(char const *s1, char const *set, int start)
{
	int	i;

	i = 0;
	while (set[++i])
	{
		if (s1[start] != set[i])
			break ;
		else
			start++;
	}
	return (start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*temp;

	start = ft_trim_start_end(s1, set, 0);
	end = ft_trim_start_end(s1, set, ft_strlen(s1));
	temp = (char *)malloc(sizeof(char) * (end - start));
	if (!temp)
		return (NULL);
	i = 0;
	while (start < end)
		temp[i] = s1[start++];
	temp[i] = '\0';
	return (temp);
}
