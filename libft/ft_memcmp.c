/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreal-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:11:56 by jreal-ma          #+#    #+#             */
/*   Updated: 2024/09/26 16:31:18 by jreal-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		if (*((unsigned char *)s1 + index) == *((unsigned char *)s2 + index))
			index++;
		else
			return ((*((unsigned char *)s1 + index))
				- *((unsigned char *)s2 + index));
	}
	return (0);
}
