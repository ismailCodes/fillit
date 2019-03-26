/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_coord.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <ielmoudn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:07:09 by ielmoudn          #+#    #+#             */
/*   Updated: 2018/12/10 22:28:46 by ielmoudn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetris	*fill_coord(t_tetris *node, char *buf)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 20)
	{
		if (buf[i] == '#')
		{
			node->ycoord[j] = i % 5;
			node->xcoord[j] = i / 5;
			j++;
		}
		i++;
	}
	return (node);
}
