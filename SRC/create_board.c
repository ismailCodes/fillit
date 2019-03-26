/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_board.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <ielmoudn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 10:22:51 by afaddoul          #+#    #+#             */
/*   Updated: 2018/12/10 22:44:56 by ielmoudn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**create_board(t_tetris *dlist, int *size)
{
	int		i;
	char	**board;

	i = 0;
	board = malloc(sizeof(char *) * (*size));
	while (i < *size)
	{
		board[i] = malloc(*size);
		board[i] = ft_memset(board[i], '.', *size);
		i++;
	}
	i = 0;
	while (!back_track(dlist, board, *size))
	{
		free(board);
		board = malloc(sizeof(char *) * ++(*size));
		i = 0;
		while (i < *size)
		{
			board[i] = malloc(*size);
			board[i] = ft_memset(board[i], '.', *size);
			i++;
		}
	}
	return (board);
}
