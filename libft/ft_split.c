/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreal-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:31:56 by jreal-ma          #+#    #+#             */
/*   Updated: 2024/09/24 13:59:02 by jreal-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	substrings_length(char const *s, char c)
{
	int	length;

	length = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			length++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	return (length);
}

static void	free_split(char **array, int j)
{
	while (j >= 0)
	{
		free(array[j]);
		j--;
	}
	free(array);
}

static int	fill_array(char **array, char const *s, char c, int j)
{
	char const	*tmp;

	tmp = s;
	while (*tmp)
	{
		while (*s == c)
			++s;
		tmp = s;
		while (*tmp && *tmp != c)
			++tmp;
		if ((*tmp == c || *tmp == '\0') && tmp > s)
		{
			array[j] = ft_substr(s, 0, tmp - s);
			if (!array[j])
			{
				free_split(array, j - 1);
				return (0);
			}
			j++;
			s = tmp;
		}
	}
	array[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	if (!s)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * (substrings_length(s, c) + 1));
	if (!array)
		return (NULL);
	if (!fill_array(array, s, c, 0))
		return (NULL);
	return (array);
}
