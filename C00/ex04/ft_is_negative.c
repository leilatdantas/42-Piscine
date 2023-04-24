/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:05:54 by lebarbos          #+#    #+#             */
/*   Updated: 2023/02/06 17:14:47 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negativo;
	char	positivo;

	negativo = 'N';
	positivo = 'P';
	if (n < 0)
	{
		write(1, &negativo, 1);
	}
	else
	{
		write(1, &positivo, 1);
	}
}

/*int main ()
{
	ft_is_negative(0);
}*/