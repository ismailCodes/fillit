/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <ielmoudn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 11:54:26 by afaddoul          #+#    #+#             */
/*   Updated: 2018/12/11 16:11:50 by afaddoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_sqrt(int nb)
{
	int		i;

	i = 1;
	while (i * i < nb)
	{
		i++;
	}
	if (i * i == nb)
		return (i);
	else
		return (0);
}

int		ft_next_sqrt(int nb)
{
	int x;

	x = 0;
	while ((x = ft_sqrt(nb)) == 0)
	{
		nb++;
	}
	return (x);
}
