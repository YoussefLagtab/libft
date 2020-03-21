/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylagtab <ylagtab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 00:20:44 by ylagtab           #+#    #+#             */
/*   Updated: 2020/02/27 22:51:22 by ylagtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char   *t;
	void	        *res;
    size_t          i

	if ((res = malloc(size)) == NULL)
		return (NULL);
    i = 0;
    t = (unsigned char*)res;
    while (i < size)
    {
        t[i] = 0;
        i++;
    }
	return (res);
}
