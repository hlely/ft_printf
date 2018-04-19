/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_octal.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlely <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 16:33:06 by hlely             #+#    #+#             */
/*   Updated: 2018/04/18 16:35:38 by hlely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_octal(va_list *arg, t_opt opt)
{
	uintmax_t		nb;
	char			*res;

	nb = get_unumber(arg, opt);
	opt.flags ^= (nb == 0 && opt.preci != 0) ? (opt.flags & HASH) : 0;
	res = ft_itoa_base(nb, 8);
	if (ft_strequ(res, "0") && opt.preci == 0)
	{
		ft_strdel(&res);
		res = ft_strdup("");
	}
	res = handle_number_flag(res, &opt, OCT);
	ft_putstr(res);
	return (ft_strlen(res));
}

int			ft_maxioctal(va_list *arg, t_opt opt)
{
	uintmax_t		nb;
	char			*res;

	opt.flags |= L_MODE;
	nb = get_unumber(arg, opt);
	opt.flags ^= (nb == 0 && opt.preci != 0) ? (opt.flags & HASH) : 0;
	res = ft_itoa_base(nb, 8);
	if (ft_strequ(res, "0") && opt.preci == 0)
	{
		ft_strdel(&res);
		res = ft_strdup("");
	}
	res = handle_number_flag(res, &opt, OCT);
	ft_putstr(res);
	return (ft_strlen(res));
}