/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_safe.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <ielmoudn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 16:12:17 by ielmoudn          #+#    #+#             */
/*   Updated: 2018/12/09 16:50:52 by afaddoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		is_safe(t_tetris *node, char **board, t_coord pos, int size)
{
	if (board[pos.x][pos.y] == '.')
		if (check_all_coord(pos, board, node, size))
			return (1);
	return (0);
}
