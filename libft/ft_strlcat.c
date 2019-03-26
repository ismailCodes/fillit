/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaddoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 20:14:31 by afaddoul          #+#    #+#             */
/*   Updated: 2018/10/15 12:42:38 by afaddoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (size == 0)
		return (lensrc);
	if (lendst > size)
		lensrc = lensrc + size;
	else
		lensrc = lendst + lensrc;
	i = 0;
	while ((src[i] != '\0') && (lendst < (size - 1)))
	{
		dst[lendst] = src[i];
		lendst++;
		i++;
	}
	dst[lendst] = '\0';
	return (lensrc);
}
