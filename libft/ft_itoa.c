/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreal-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:59:23 by jreal-ma          #+#    #+#             */
/*   Updated: 2024/09/26 17:16:54 by jreal-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_length(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

void	ft_fill_string(int size, int offset, int n, char *string)
{
	while (size > offset)
	{
		string[size - 1] = n % 10 + '0';
		n = n / 10;
		size--;
	}
}

char	*ft_itoa(int n)
{
	int		size;
	int		offset;
	char	*string;

	offset = 0;
	size = ft_count_length(n);
	string = (char *)malloc(sizeof(char) * size + 1);
	if (!string)
		return (NULL);
	if (n == -2147483648)
	{
		string[0] = '-';
		string[1] = '2';
		n = 147483648;
		offset = 2;
	}
	if (n < 0)
	{
		offset = 1;
		string[0] = '-';
		n = -n;
	}
	ft_fill_string(size, offset, n, string);
	string[size] = '\0';
	return (string);
}
