/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreal-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:34:01 by jreal-ma          #+#    #+#             */
/*   Updated: 2024/09/24 12:56:19 by jreal-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*finalstr;
	int		length;
	int		index;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	finalstr = (char *)malloc(sizeof(char) * (length +1));
	if (!finalstr)
		return (NULL);
	index = 0;
	while (index < length)
	{
		finalstr[index] = (*f)(index, s[index]);
		index++;
	}
	finalstr[index] = 0;
	return (finalstr);
}
