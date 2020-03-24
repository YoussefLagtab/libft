/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylagtab <ylagtab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 00:05:39 by ylagtab           #+#    #+#             */
/*   Updated: 2020/03/02 20:46:23 by ylagtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_nbrlen(__uint128_t nbr)
{
    int len;

	len = 1;
	while (nbr)
    {
		len++;
        nbr /= 10;
    }
	return (len);
}
