/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   back_tracking.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaddoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 20:10:48 by afaddoul          #+#    #+#             */
/*   Updated: 2018/12/09 16:18:00 by afaddoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		back_track(t_tetris *head, char **board, int size)
{
	t_coord	pos;

	if (head == NULL)
		return (1);
	pos.x = 0;
	while (pos.x < size)
	{
		pos.y = 0;
		while (pos.y < size)
		{
			if (is_safe(head, board, pos, size))
			{
				set_reset(pos, board, head, 1);
				if (back_track(head->next, board, size))
					return (1);
				set_reset(pos, board, head, 0);
			}
			pos.y++;
		}
		pos.x++;
	}
	return (0);
}
