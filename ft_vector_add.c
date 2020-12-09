/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylagtab <ylagtab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 08:58:27 by ylagtab           #+#    #+#             */
/*   Updated: 2020/12/09 12:33:55 by ylagtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_element	*ft_element_new(void *content, size_t content_size)
{
	t_element *el;

	if ((el = (t_element *)malloc(sizeof(t_element))) == NULL)
		return (NULL);
	if (content == NULL)
	{
		el->content = NULL;
		el->content_size = 0;
		return (el);
	}
	if ((el->content = malloc(content_size)) == NULL)
	{
		free(el);
		return (NULL);
	}
	el->content_size = content_size;
	ft_memcpy(el->content, content, content_size);
	return (el);
}

int					ft_vector_add(t_vector *vector, void *content,
	size_t content_size)
{
	t_element *data;

	if (vector->length == vector->capacity)
		if (ft_vector_realloc(vector, vector->capacity * 2) == -1)
			return (-1);
	if ((data = ft_element_new(content, content_size)) == NULL)
		return (-1);
	vector->array[vector->length] = data;
	vector->length = vector->length + 1;
	return (0);
}
