/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaddoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 21:44:34 by afaddoul          #+#    #+#             */
/*   Updated: 2018/10/23 20:35:24 by afaddoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*ptr;
	int		sign;
	int		i;

	sign = 0;
	i = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (!(ptr = ft_strnew(ft_digit_counter(n))))
		return (0);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n = n * -1;
		sign = -1;
	}
	ptr[i++] = (n % 10) + 48;
	while ((n /= 10) != 0)
		ptr[i++] = (n % 10) + 48;
	if (sign < 0)
		ptr[i++] = '-';
	ptr[i] = '\0';
	return (ft_strrev(ptr));
}
