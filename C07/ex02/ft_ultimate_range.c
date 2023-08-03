/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:15:23 by wchumane          #+#    #+#             */
/*   Updated: 2023/08/03 09:53:00 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	i;

	i = 0;
	diff = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = malloc(sizeof(int) * diff);
	if (!(range))
		return (0);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
	int *a;
	int *b;
	int c;
	int d;

	c = ft_ultimate_range(&a,5,5);
	d = ft_ultimate_range(&b,5,9);
	printf("Expect.0 4 0x0 5 6 7 8\n");
	printf("Result.%d %d %p %d %d %d %d\n",c,d,a,b[0],b[1],b[2],b[3]);
}*/
