/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylagtab <ylagtab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 03:15:52 by ylagtab           #+#    #+#             */
/*   Updated: 2019/10/07 14:06:07 by ylagtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char    *new_str;
    size_t  i;

    if (s == NULL || (new_str = (char *)malloc(len + 1)) == NULL)
        return (NULL);
    i = 0;
    while (i < len)
    {
        new_str[i] = s[start];
        i++;
        start++;
    }
    new_str[i] = '\0';
    return (new_str);
}
