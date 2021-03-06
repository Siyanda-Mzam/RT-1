/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_objects.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smamba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 13:20:22 by smamba            #+#    #+#             */
/*   Updated: 2016/08/07 18:26:47 by simzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tracer.h"

t_objects	*new_stack(int size)
{
	t_objects	*cap;

	if (!(cap = (t_objects*)malloc(sizeof(t_objects))) || size <= 0)
		return (NULL);
	if(!(cap->store = (t_object*)malloc(sizeof(t_object) * size)))
	{
		free(cap);
		return (NULL);
	}
	cap->top = 0;
	cap->size = size;
	return (cap);
}

t_objects	*push_object(t_objects *sps, t_object *s)
{
	if (!sps|| !s)
		return (NULL);
	if (!(sps->top < sps->size))
		return (NULL);
	sps->store[sps->top] = *s;
	sps->top += 1;
	return (sps);
}

t_object	get_object(t_objects *s, int idx)
{
	return (s->store[idx]);
}

void		kill_stack(t_objects **sp)
{
	if (sp && *sp)
	{
		free((*sp)->store);
		free(*sp);
		*sp = NULL;	
	}
}
