/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_counter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaddoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 16:42:04 by afaddoul          #+#    #+#             */
/*   Updated: 2018/10/20 17:20:35 by afaddoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_word_counter(char const *s, char c)
{
	int		i;
	int		my_counter;

	i = 0;
	my_counter = 0;
	if (s[i] != c)
		my_counter++;
	i++;
	while (s[i] != '\0')
	{
		while (s[i] != '\0')
		{
			if ((s[i] != c) && (s[i - 1] == c))
				my_counter++;
			i++;
		}
		i++;
	}
	return (my_counter);
}
