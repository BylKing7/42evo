/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:18:04 by hsaadi            #+#    #+#             */
/*   Updated: 2022/04/06 12:43:57 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize)
	{
		while (src[i] && (i < dstsize))
		{
			dst[i] = src[i];
			i++;
		}
		*dst = '\0';
	}
	i = 0;
	while (src[i])
		i++;
	printf("in it::%s\n", src);
	return (i);
}
