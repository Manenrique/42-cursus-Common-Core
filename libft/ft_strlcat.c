/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreal-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:15:59 by jreal-ma          #+#    #+#             */
/*   Updated: 2024/09/24 12:56:26 by jreal-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	srcindex;
	size_t	value;

	srcindex = 0;
	index = 0;
	if (size == 0)
		return (ft_strlen(src));
	else if (size < ft_strlen(dst))
		value = ft_strlen(src) + size;
	else
		value = ft_strlen(dst) + ft_strlen(src);
	while (dst[index] != '\0')
		index++;
	while (src[srcindex] != '\0' && index + 1 < size)
	{
		dst[index] = src[srcindex];
		index++;
		srcindex++;
	}
	dst[index] = '\0';
	return (value);
}
