/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four_newline.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaddoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 17:03:27 by afaddoul          #+#    #+#             */
/*   Updated: 2018/12/09 17:03:50 by afaddoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		four_newline(char *buf)
{
	int		i;
	int		newline_check;

	newline_check = 0;
	i = 4;
	while (i < 20)
	{
		if (buf[i] == '\n')
			newline_check++;
		i = i + 5;
	}
	if (newline_check != 4)
		return (0);
	return (1);
}
