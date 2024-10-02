/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreal-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:26:11 by jreal-ma          #+#    #+#             */
/*   Updated: 2024/09/24 12:56:30 by jreal-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		join_index;
	char	*join;
	int		index;

	index = 0;
	join_index = 0;
	join = malloc(sizeof(char) * (ft_strlen((char *)s1)
				+ ft_strlen((char *)s2) + 1));
	if (!s1 || !s2 || !join)
		return (NULL);
	while (s1[index])
	{
		join[join_index] = s1[index];
		index++;
		join_index++;
	}
	index = 0;
	while (s2[index])
	{
		join[join_index] = s2[index];
		index++;
		join_index++;
	}
	join[join_index] = '\0';
	return (join);
}
