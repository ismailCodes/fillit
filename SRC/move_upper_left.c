/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_upper_left.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaddoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 11:50:01 by afaddoul          #+#    #+#             */
/*   Updated: 2018/12/11 12:48:32 by afaddoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	move_upper_left(t_tetris *head)
{
	int		coord_x_min;
	int		coord_y_min;
	int		i;
	char	alph;

	coord_x_min = 0;
	coord_y_min = 0;
	alph = 'A';
	while (head)
	{
		i = 0;
		head->alph = alph;
		coord_x_min = coord_min(head->xcoord);
		coord_y_min = coord_min(head->ycoord);
		while (i < 4)
		{
			head->xcoord[i] -= coord_x_min;
			head->ycoord[i] -= coord_y_min;
			i++;
		}
		alph++;
		head = head->next;
	}
}
