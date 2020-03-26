/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylagtab <ylagtab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 23:41:28 by ylagtab           #+#    #+#             */
/*   Updated: 2020/03/06 23:21:19 by ylagtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char const **s1, char const **s2, int a, int b)
{
	char	*str;

	str = ft_strjoin(s1, s2);
	if (a == 1)
		ft_strdel((char **)s1);
	if (b == 1)
		ft_strdel((char **)s2);
	return (str);
}
