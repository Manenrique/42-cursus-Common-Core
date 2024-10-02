/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreal-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:50:19 by jreal-ma          #+#    #+#             */
/*   Updated: 2024/09/27 11:22:48 by jreal-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*ptr;
	unsigned char	uc;

	uc = (unsigned char)c;
	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == uc)
			return (ptr);
		ptr++;
	}
	if (uc == '\0')
		return (ptr);
	return (NULL);
}
