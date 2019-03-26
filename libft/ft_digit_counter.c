/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit_counter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaddoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 13:56:42 by afaddoul          #+#    #+#             */
/*   Updated: 2018/10/21 14:16:44 by afaddoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_digit_counter(int n)
{
	int		counter;

	counter = 0;
	if (n < 0)
	{
		counter++;
		n *= -1;
	}
	while (n)
	{
		n = n / 10;
		++counter;
	}
	return (counter);
}
