/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreal-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:40:56 by jreal-ma          #+#    #+#             */
/*   Updated: 2024/09/26 16:42:29 by jreal-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	length;

	length = ft_strlen(s) + 1;
	dest = malloc(sizeof(char) * length);
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s, length);
	return (dest);
}
