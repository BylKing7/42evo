/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:27:53 by loadjou           #+#    #+#             */
/*   Updated: 2022/03/01 15:31:38 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_str_is_alpha(char *str);

int	main()
{
	char	*str = "abcdjd";
	printf("%d", ft_str_is_alpha(str));
	return 0;
}