/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_tetrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <ielmoudn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 16:54:02 by ielmoudn          #+#    #+#             */
/*   Updated: 2018/12/04 21:56:59 by afaddoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetris	*add_tetrim(t_tetris *head, char *buf)
{
	t_tetris	*current;
	t_tetris	*node;

	node = (t_tetris*)malloc(sizeof(t_tetris));
	node = fill_coord(node, buf);
	if (head == NULL)
	{
		node->prev = NULL;
		node->next = NULL;
		return (node);
	}
	else
	{
		current = head;
		while (current->next)
			current = current->next;
		current->next = node;
		node->prev = current;
		node->next = NULL;
	}
	return (head);
}
