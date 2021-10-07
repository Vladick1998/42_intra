/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:01:10 by oarnoldo          #+#    #+#             */
/*   Updated: 2021/10/07 12:12:14 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_strncmp(const char *str1, const char *str2, size_t count)
{
	int	i;

	i = 0;
	while (str1[i] || i <= count)
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
/*
int	main(void)
{
	int str = strncmp("12312123", "12312123", 5);
	printf("is - %d, ft - %d", str, ft_strncmp("12312123", "12312123", 5));
	return (0);
}
*/
