/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 02:23:41 by marvin            #+#    #+#             */
/*   Updated: 2021/10/14 02:23:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_lib.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    int i;
    int q;

    i = 0;
    j = 0;
    str = malloc(sizeof(char *) * (len + 1));
    if (!str)
        return (NULL);
    while (s[i])
    {
        if (s[i]>=start && j < len)
        {
            str[j] = s[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
    return (str);
}