/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreal-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:51:51 by jreal-ma          #+#    #+#             */
/*   Updated: 2024/09/27 11:55:17 by jreal-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*s;
	char	*d;

	if (dst == src || n == 0)
		return (dst);
	if (dst < src)
		return (ft_memcpy(dst, src, n));
	s = (char *)src;
	d = (char *)dst;
	while (n--)
		d[n] = s[n];
	return (dst);
}
