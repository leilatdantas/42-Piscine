/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 10:38:08 by lebarbos          #+#    #+#             */
/*   Updated: 2023/02/23 11:35:11 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
    int *tab;
	int i;
	
	i = 0;
	if(min >= max)
		return(NULL);
	tab = (int *)malloc(sizeof(int) * max - min);
	if(tab == NULL)
		return(0);
	while(i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return(tab);
}

