/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylagtab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 13:45:40 by ylagtab           #+#    #+#             */
/*   Updated: 2019/04/14 23:07:52 by ylagtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstnew(void const *content, size_t content_size)
{
	t_list *node;

	if ((node = (t_list *)ft_memalloc(sizeof(t_list))) == NULL)
		return (NULL);
	node->next = NULL;
	if (content == NULL)
	{
		node->content = NULL;
		node->content_size = 0;
		return (node);
	}
	if ((node->content = ft_memalloc(content_size)) == NULL)
	{
		free(node);
		return (NULL);
	}
	node->content_size = content_size;
	ft_memcpy(node->content, content, content_size);
	return (node);
}
