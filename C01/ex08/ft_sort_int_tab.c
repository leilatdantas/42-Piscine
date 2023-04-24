/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:23:32 by lebarbos          #+#    #+#             */
/*   Updated: 2023/02/09 11:33:30 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include<stdio.h>

void swap(int *tab, int *tab2)
{
	int mod;
	mod = *tab;
	*tab = *tab2;
	*tab2 = mod;
}*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[j] > (tab[j + 1]))
				swap (&tab[j], &tab[j + 1]);
			j ++;
		}
		j = 0;
		i ++;
	}
}

/*int main ()
{
  int x = 0;
  int arr1[]={3, 70, 2, 31, 9, 8, 77, 1};
  int size1 = sizeof(arr1)/sizeof(arr1[0]);
  ft_sort_int_tab(arr1, size1);
  while(x<size1)
  {
	printf("%d ", arr1[x]);
	x++;
  }
}*/