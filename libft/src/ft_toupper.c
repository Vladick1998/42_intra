/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:17:15 by oarnoldo          #+#    #+#             */
/*   Updated: 2021/10/11 16:56:23 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/ft_lib.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}
/*
#include<stdio.h>
#include<ctype.h>
int	main(void)
{
	printf("is - %d, ft - %d", toupper('A'), ft_toupper('A'));
	return (0);
}
*/
