/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 06:09:34 by hsaadi            #+#    #+#             */
/*   Updated: 2022/04/08 21:33:31 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	if (size == 0)
		return ((void *)malloc(nmemb * 1));
	tab = (void *)malloc(nmemb * size);
	if (tab == 0)
		return (NULL);
	ft_bzero(tab, nmemb * size);
	return (tab);
}
