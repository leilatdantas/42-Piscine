/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:00:38 by lebarbos          #+#    #+#             */
/*   Updated: 2023/02/20 18:29:09 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 1)
		return (1);
	
	while (i <= nb / 2)
	{
		if (i * i == nb)
			return (i);
		else if (i >= 46341)
			break;
		i++;
	}
	return (0);
}

int main()
{
	printf("%d\n", ft_sqrt(1));
}