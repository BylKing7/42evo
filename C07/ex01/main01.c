/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:51:48 by loadjou           #+#    #+#             */
/*   Updated: 2022/03/15 13:19:58 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int *ft_range(int min, int max);
#include <stdio.h>
int	main()
{
	int *tab = ft_range(-10, -4);
	int i = 0;
	while (tab[i] != '\0')
{
		printf("%i, ", tab[i]);
		i++;
	}
	return (0);
}