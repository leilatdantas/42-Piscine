/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:08:19 by lebarbos          #+#    #+#             */
/*   Updated: 2023/02/20 16:43:34 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv[0][i] != 0 && argc)
	{
		write(1, &(argv[0][i]), 1);
		i++;
	}
	write(1, "\n", 1);
}
