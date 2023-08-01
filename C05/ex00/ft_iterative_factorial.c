/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:16:54 by wchumane          #+#    #+#             */
/*   Updated: 2023/08/01 01:24:13 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (nb > 0)
		{
			result *= nb;
			nb--;
		}
	}
	return (result);
}
/*
#include <stdio.h>
int main (void)
{
	printf("%d\n", ft_iterative_factorial(3));
	printf("%d\n", ft_iterative_factorial(-3));
	printf("%d\n", ft_iterative_factorial(0));
}*/
