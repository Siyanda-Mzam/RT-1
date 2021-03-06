/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smamba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 14:11:31 by smamba            #+#    #+#             */
/*   Updated: 2016/08/07 15:56:33 by smamba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_H
# define MATRIX_H
# include <vector.h>
# include <stdio.h>

typedef struct		s_matrix
{
	t_f64		**mat;
	t_i32		rows;
	t_i32		cols;
}					t_matrix;

typedef t_matrix	t_matrix44;

t_matrix			new_mat(int r, int c, t_f64 dvalue);
t_matrix44			new_mat44(t_f64 dvalue);
t_matrix			transpose_mat(t_matrix *m);
t_vec3f				vector_multiply(t_vec3f *v, t_matrix44 *m);
void				kill_matrix(t_matrix *mat);
#endif
