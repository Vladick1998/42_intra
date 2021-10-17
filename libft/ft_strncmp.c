/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:01:10 by oarnoldo          #+#    #+#             */
/*   Updated: 2021/10/17 01:07:31 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t count)
{
	while (*str1 && *str2
		&& *(unsigned char *)str1 == *(unsigned char *)str2
		&& count > 0)
	{
		str1++;
		str2++;
		count--;
	}
	if (count == 0)
		return (0);
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}
