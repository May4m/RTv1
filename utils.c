/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smamba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 10:52:52 by smamba            #+#    #+#             */
/*   Updated: 2016/08/31 14:11:45 by smamba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tracer.h"

t_f64	mix(t_f64 a, t_f64 b, t_f64 mix)
{
	return (b * mix + a * (1 - mix));
}

t_f64	ft_max(const t_f64 a, const t_f64 b)
{
	return (a > b ? (a) : (b));
}

t_f64	ft_min(const t_f64 a, const t_f64 b)
{
	return (a > b ? (b) : (a));
}

void	ft_exit(const int code, const char *msg, ...)
{
	va_list	valist;

	va_start(valist, msg);
	while (*msg)
	{
		if (*msg == '%' && *(msg + 1) == 's')
		{
			msg++;
			ft_putstr((char*)va_arg(valist, char*));
		}
		else
			ft_putchar(*msg);
		msg++;
	}
	ft_putchar('\n');
	va_end(valist);
	exit(code);
}
