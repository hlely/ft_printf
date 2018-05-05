/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nblen.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlely <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/05 08:55:04 by hlely             #+#    #+#             */
/*   Updated: 2018/05/05 08:55:06 by hlely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		nblen(intmax_t nb)
{
	int		i;

	i = 1;
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}
