/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreal-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:40:26 by jreal-ma          #+#    #+#             */
/*   Updated: 2024/09/26 17:54:06 by jreal-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	size_t	trim_end;
	size_t	trim_start;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	trim_end = ft_strlen(s1) - 1;
	trim_start = 0;
	while (s1[trim_start] && ft_strchr(set, s1[trim_start]))
		++trim_start;
	while (ft_strchr(set, s1[trim_end]) && s1[trim_end])
		--trim_end;
	trimmed_str = ft_substr(s1, trim_start, trim_end - trim_start + 1);
	return (trimmed_str);
}
