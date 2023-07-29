/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:11:33 by wchumane          #+#    #+#             */
/*   Updated: 2023/07/20 15:58:54 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
   To solve this ex, i decide to use a bubble sort algorithm
   --Bubble sort--
   >> the outer while loop
   	- start at index = 0, step = +1, stop when swap_flag = false and
	no more index have to swap
	- set j = 0 to check all indexs in array in every new round
   >> the inner while loop
   	- compare the value of index j and j + 1
	- if the value of j + 1 is less than j, swap it!!
So,  j : represent the index in this array
     i : iterate over 
   */
/*#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp1;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp1 = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp2;
			}
			j++;
		}
		i++;
	}
}
/*
void printArray(int *array, int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
}

int	main(void)
{
	int	*tab;
	int	test[] = {1, 12, 3, 4, 23, 6, 7, 8};

	tab = test;
	bubble_sort(tab, 8);
	printArray(tab, 8);
}*/
