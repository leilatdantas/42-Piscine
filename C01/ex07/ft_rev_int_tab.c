/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:38:36 by lebarbos          #+#    #+#             */
/*   Updated: 2023/02/09 11:40:19 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab [i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = swap;
		i++;
	}
}

int main ()
{
  int x = 0;
  int arr1[]={3, 4, 5, 8, 9};
  int size1 = sizeof(arr1)/sizeof(arr1[0]);
  ft_rev_int_tab(arr1, size1);
  while(x<size1)
  {
	printf("%d ", arr1[x]);
	x++;
  }
}
