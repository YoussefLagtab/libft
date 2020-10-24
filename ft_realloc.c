/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylagtab <ylagtab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 01:42:48 by vanderwolk        #+#    #+#             */
/*   Updated: 2020/10/15 08:38:58 by ylagtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *addr, size_t old_size, size_t new_size)
{
	void	*ret_addr;

	ret_addr = malloc(new_size);
	if (ret_addr == NULL)
	{
		free(addr);
		return (NULL);
	}
	ft_memcpy(ret_addr, addr, old_size);
	free(addr);
	return (ret_addr);
}
