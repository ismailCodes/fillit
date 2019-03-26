/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_links.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <ielmoudn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 05:12:47 by ielmoudn          #+#    #+#             */
/*   Updated: 2018/12/09 16:35:57 by afaddoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_links(char *buf)
{
	int		links;
	int		i;

	links = 0;
	i = 0;
	while (i <= 19)
	{
		if (buf[i] == '#')
		{
			if (buf[i - 1] == '#')
				links++;
			if (buf[i + 1] == '#')
				links++;
			if (buf[i - 5] == '#')
				links++;
			if (buf[i + 5] == '#')
				links++;
		}
		i++;
	}
	if (links != 6 && links != 8)
		return (0);
	return (1);
}
