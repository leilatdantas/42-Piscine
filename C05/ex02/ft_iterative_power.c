/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:17:29 by lebarbos          #+#    #+#             */
/*   Updated: 2023/02/20 10:40:54 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

/*int main()
{
	int nb = 5;
	int power = 2;
	printf("%d\n", ft_iterative_power(nb, power));
}*/