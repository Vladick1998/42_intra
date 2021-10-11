/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oarnoldo <oarnoldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:01:27 by oarnoldo          #+#    #+#             */
/*   Updated: 2021/10/11 16:58:40 by oarnoldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/ft_lib.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include<stdio.h>
#include<ctype.h>
int	main(void)
{
	printf("is - %d, ft - %d", isalpha('z'), ft_isalpha('z'));
	return (0);
}
*/
