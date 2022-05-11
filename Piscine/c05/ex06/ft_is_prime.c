/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 10:00:32 by hsaadi            #+#    #+#             */
/*   Updated: 2022/02/06 10:02:17 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	result;

	result = 2;
	if (nb < 2)
		return (0);
	while (result <= nb / result)
	{
		if (nb % result == 0)
			return (0);
		result++;
	}
	return (1);
}