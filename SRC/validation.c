/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <ielmoudn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 13:42:48 by afaddoul          #+#    #+#             */
/*   Updated: 2018/12/09 17:30:58 by afaddoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		validation(char *buf)
{
	static int	tetris_counter;

	tetris_counter++;
	if (!char_checker(buf) || !both_char_checker(buf) || !(four_newline(buf))
			|| !check_links(buf) || tetris_counter > 26)
		return (-1);
	if (buf[20] == '\0')
	{
		if (tetris_counter > 26)
			return (-1);
	}
	return (tetris_counter);
}
