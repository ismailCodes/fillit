/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all_coord.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <ielmoudn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 16:18:31 by ielmoudn          #+#    #+#             */
/*   Updated: 2018/12/10 22:46:05 by ielmoudn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_all_coord(t_coord pos, char **board, t_tetris *node, int size)
{
	int		i;
	int		x;
	int		y;

	i = 0;
	x = pos.x - (node->xcoord[0]);
	y = pos.y - (node->ycoord[0]);
	while (i < 4)
	{
		if (((node->xcoord[i] + x) < 0) ||
				((node->xcoord[i] + x) >= size) ||
				((node->ycoord[i] + y) < 0) ||
				((node->ycoord[i] + y) >= size) ||
				board[node->xcoord[i] + x][node->ycoord[i] + y] != '.')
			return (0);
		i++;
	}
	return (1);
}
