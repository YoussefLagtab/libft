/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_remove_index.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylagtab <ylagtab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 09:27:40 by ylagtab           #+#    #+#             */
/*   Updated: 2021/01/24 18:04:02 by ylagtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_vector_remove_index(t_vector *vector, size_t index,
	void (*del)(void *content, size_t content_size))
{
	t_element	*data;
	size_t		last_index;

	if (index >= vector->length)
		return (1);
	last_index = vector->length - 1;
	data = vector->array[index];
	if (last_index != index)
		vector->array[index] = vector->array[last_index];
	vector->array[last_index] = NULL;
	(*del)(data->content, data->content_size);
	free(data);
	vector->length = vector->length - 1;
	if (vector->length && vector->length * 4 <= vector->capacity)
		if (ft_vector_realloc(vector, vector->capacity / 4) == -1)
			return (-1);
	return (0);
}
