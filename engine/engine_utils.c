/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   engine_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smamba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 17:06:24 by smamba            #+#    #+#             */
/*   Updated: 2016/08/31 14:23:26 by smamba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "engine.h"

t_f64	get_ior(t_f64 index)
{
	t_f64	a;
	t_f64	b;

	a = pow(index - 1, 2);
	b = pow(index + 1, 2);
	return (a / b);
}

t_f64	get_fresnel(t_object *obj, t_f64 facingratio)
{
	if (obj->mirror == TRUE)
		return (mix(pow(1 - facingratio, 5), 1, 0.5));
	else if (obj->transparency > 0)
		return (mix(pow(1 - facingratio, 5), 1, get_ior(obj->transparency)));
	else
		return (mix(pow(1 - facingratio, 4), 1, 0.1));
}
