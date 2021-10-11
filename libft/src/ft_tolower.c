/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:31:15 by oarnoldo          #+#    #+#             */
/*   Updated: 2021/10/11 16:54:45 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/ft_lib.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 'a');
	return (c);
}
/*
#include<stdio.h>
#include<ctype.h>
int	main(void)
{
	printf("is - %d, ft - %d\n", tolower('A'), ft_tolower('A'));
	printf("is - %d, ft - %d\n", tolower('1'), ft_tolower('1'));
	printf("is - %d, ft - %d\n", tolower('a'), ft_tolower('a'));
	printf("is - %d, ft - %d\n", tolower('\0'), ft_tolower('\0'));
	return (0);
}
*/
