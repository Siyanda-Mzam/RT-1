/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smamba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 14:30:48 by smamba            #+#    #+#             */
/*   Updated: 2016/07/31 15:36:44 by smamba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tracer.h"

t_objects	*scene_one()
{
	t_objects   *vector = new_spheres(6);

	t_object	sp1	= new_sphere(new_vec3f(0, -10004, -20),
								 new_color(.2, .2, .2),
								 new_color(0, .0, .0),
								 10000, 0);
	t_object    sp2 = new_sphere(new_vec3f(0, 0, -20),
                                 new_color(1.00, 0.32, 0.36),
                                 new_color(0., 0., 0.),
                                 4, TRUE);
    sp2.transparency = .5;
	t_object	sp3 = new_sphere(new_vec3f(5.0, -1, -15),
								 new_color(0.90, 0.76, 0.46),
								 new_color(0.0, 0.0, 0.0),
								 2, TRUE);
	t_object	sp4 = new_sphere(new_vec3f(5.0, 0, -25),
								 new_color(0.65, 0.77, 0.97),
								 new_color(0.0, 0.0, 0.0),
								 3, TRUE);
	t_object	sp5 = new_sphere(new_vec3f(-5.5, 0, -15),
								new_color(.99, .99, .99),
								new_color(0.0, 0.0, 0.0),
								3, TRUE);
	t_object    lig = new_light(new_vec3f(0, 20.0, -30),
                                new_color(3, 3, 3), 3);
	push_sphere(vector, &sp1);
	push_sphere(vector, &sp2);
	push_sphere(vector, &sp3);
	push_sphere(vector, &sp4);
	push_sphere(vector, &sp5);
	push_sphere(vector, &lig);
	return (vector);
}
