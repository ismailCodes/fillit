/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_or_reset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaddoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 17:36:33 by afaddoul          #+#    #+#             */
/*   Updated: 2018/12/09 17:13:24 by afaddoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	set_reset(t_coord pos, char **board, t_tetris *node, int flag)
{
	int		diff_x;
	int		diff_y;
	char	alpha;
	int		x;

	x = -1;
	diff_x = pos.x - (node->xcoord[0]);
	diff_y = pos.y - (node->ycoord[0]);
	alpha = node->alph;
	if (flag)
	{
		while (++x < 4)
			board[node->xcoord[x] + diff_x][node->ycoord[x] + diff_y] = alpha;
	}
	else
	{
		x = -1;
		while (++x < 4)
			board[node->xcoord[x] + diff_x][node->ycoord[x] + diff_y] = '.';
	}
}
