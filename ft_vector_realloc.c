/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_realloc.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylagtab <ylagtab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 09:00:00 by ylagtab           #+#    #+#             */
/*   Updated: 2020/10/15 09:00:33 by ylagtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_vector_realloc(t_vector *vector, size_t new_capacity)
{
	size_t	old_size;
	size_t	new_size;

	old_size = vector->capacity * sizeof(t_element*);
	new_size = new_capacity * sizeof(t_element*);
	vector->array = ft_realloc(vector->array, old_size, new_size);
	if (vector->array == NULL)
		return (-1);
	vector->capacity = new_capacity;
	return (0);
}
