/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:06:36 by oarnoldo          #+#    #+#             */
/*   Updated: 2021/10/07 11:25:35 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int	main(void)
{
	const char *str = strchr("12312123", '3');
	printf("is - %s, ft - %s", str, ft_strchr("12312123", '3'));
	return (0);
}
*/
