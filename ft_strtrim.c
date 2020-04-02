/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylagtab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 04:02:23 by ylagtab           #+#    #+#             */
/*   Updated: 2019/04/20 01:57:35 by ylagtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
    size_t  i;
    size_t  start;
	size_t  end;
    char    *new_str;

	if (s == NULL)
		return (NULL);
	start = 0;
	while (s[start] >= 9 && s[start] <= 13)
        ++start;
    end = ft_strlen(s) - 1;
    while (start < end && s[end] >= 9 && s[end] <= 13)
        --end;
    ++end;
    if ((new_str = (char *)malloc(end - start + 1)) == NULL)
        return (NULL);
    i = 0;
    while (start < end)
    {
        new_str[i] = s[start];
        i++;
        start++;
    }
    new_str[i] = '\0';
	return (new_str);
}
