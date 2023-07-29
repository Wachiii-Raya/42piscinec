/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 23:57:49 by wchumane          #+#    #+#             */
/*   Updated: 2023/07/20 15:57:19 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*step to solve this problem
  1. declare an arrayof int + initialize it 
  2. use temporary var to change the value
  ***change it one by one***
   */
/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	temp1;
	int	temp2;
	int	rev_counter;

	rev_counter = size - 1;
	counter = 0;
	while (counter < size / 2)
	{
		temp1 = *(tab + counter); 
		temp2 = *(tab + rev_counter);
		*(tab + counter) = temp2;
		*(tab + rev_counter) = temp1;
		counter++;
		rev_counter--;
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
	int	test[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int	size = 10;

	tab = test;
	ft_rev_int_tab(tab, size);
	printArray(tab, size);
}*/
