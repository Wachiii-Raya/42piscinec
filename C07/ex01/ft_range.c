/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 09:56:56 by wchumane          #+#    #+#             */
/*   Updated: 2023/08/03 10:02:28 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	diff;
	int	*arr;
	int	i;

	i = 0;
	diff = max - min;
	if (min >= max)
		return (NULL);
	arr = malloc(sizeof(int) * diff);
	if (!(arr))
		return (0);
	while (min < max)
	{
		arr[i++] = min;
		min++;
	}
	arr[i + 1] = '\0';
	return (arr);
}
/*
#include <stdio.h>
int main(void)
{
	int *a;
	int *b;

	a = ft_range(5,5);
	b = ft_range(-10,-5);
	printf("Expect.0x0 5 6 7 8\n");
	printf("Result.%p %d %d %d %d %d\n",a,b[0],b[1],b[2],b[3], b[4]);
}*/
