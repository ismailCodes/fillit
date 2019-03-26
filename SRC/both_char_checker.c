/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   both_char_checker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaddoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 17:15:38 by afaddoul          #+#    #+#             */
/*   Updated: 2018/12/09 17:16:26 by afaddoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		both_char_checker(char *buf)
{
	int		i;
	int		hash;
	int		point;
	int		newline;

	hash = 0;
	point = 0;
	newline = 0;
	i = 0;
	while (i < 20)
	{
		if (buf[i] == '#')
			hash++;
		else if (buf[i] == '.')
			point++;
		else if (buf[i] == '\n')
			newline++;
		i++;
	}
	if (hash != 4 || point != 12 || newline != 4)
		return (0);
	return (1);
}
