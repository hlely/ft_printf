/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlely <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 19:31:40 by hlely             #+#    #+#             */
/*   Updated: 2018/04/19 17:04:22 by hlely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*ft_wchar(va_list *arg, t_opt *opt)
{
	int		c;
	char	*res;

	c = va_arg(*arg, int);
	printf("value:%d", c);
	return (res);
}

char		*ft_char(va_list *arg, t_opt *opt)
{
	int		c;
	int		len;
	char	*res;

	c = va_arg(*arg, int);
	res = ft_strnew(1);
	res[0] = (c == 0) ? '\0' : c;
	len = (c == 0) ? 1 : 0;
	res = handle_charflag(res, *opt, len);
	opt->len2 = ft_strlen(res) + len;
	opt->len += opt->len2;
	return (res);
}
