/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreal-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:16:09 by jreal-ma          #+#    #+#             */
/*   Updated: 2024/09/24 13:31:39 by jreal-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointervalue;

	pointervalue = malloc(size * nmemb);
	if (!pointervalue)
		return (NULL);
	ft_bzero(pointervalue, size * nmemb);
	return (pointervalue);
}
