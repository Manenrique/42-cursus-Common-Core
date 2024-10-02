/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreal-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:08:32 by jreal-ma          #+#    #+#             */
/*   Updated: 2024/09/28 11:41:50 by jreal-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				index;
	unsigned char	uc;

	uc = (unsigned char)c;
	index = ft_strlen((char *)s) + 1;
	while (index--)
	{
		if (*(s + index) == uc)
			return ((char *)(s + index));
	}
	return (0);
}
