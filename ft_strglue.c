/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strglue.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylagtab <ylagtab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 04:11:54 by ylagtab           #+#    #+#             */
/*   Updated: 2020/03/06 23:17:43 by ylagtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strglue(char const *s1, char glue, char const *s2)
{
	char	*new_str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
    new_str = ft_strjoin(s1, &glue);
    new_str = ft_strjoin(new_str, s2);
	return (new_str);
}
