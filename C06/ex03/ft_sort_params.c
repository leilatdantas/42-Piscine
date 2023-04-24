/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:19:43 by lebarbos          #+#    #+#             */
/*   Updated: 2023/02/20 16:48:43 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	ft_putstr2(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		argv[i][j] = '\0';
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	*swap;
	int		a;

	a = 1;
	while (a < argc - 1)
	{
		if (ft_strcmp(argv[a], argv[a + 1]) > 0)
		{
			swap = argv[a];
			argv[a] = argv[a + 1];
			argv[a + 1] = swap;
			a = 1;
		}
		else
			a++;
	}
	ft_putstr2 (argc, argv);
	return (0);
}
