/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylagtab <ylagtab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 17:32:04 by ylagtab           #+#    #+#             */
/*   Updated: 2020/03/06 22:28:03 by ylagtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
    size_t  i;
    char    ch;

    if (s == NULL)
        return (NULL);
    ch = (char)c;
    i = 0;
	while (s[i])
    {
		if (s[i] == ch)
			return ((char *)(s + i));
        i++;
    }
    return (NULL);
}
