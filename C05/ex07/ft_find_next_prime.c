/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 01:02:11 by wchumane          #+#    #+#             */
/*   Updated: 2023/08/01 14:58:29 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1 || nb <= 0)
		return (0);
	else
	{
		while (i <= nb / 2)
		{
			if (nb % i == 0)
				return (0);
			else
				i += 1;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb == 0 || nb == 1 || nb <= 0)
		return (2);
	while (nb >= 2 && nb < 2147483647)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
/*
#include <stdio.h>
int main (void)
{
	printf("%d -> %d\n", -2316, ft_find_next_prime(-2316));
	printf("%d -> %d\n", 0, ft_find_next_prime(0));
	printf("%d -> %d\n", 1, ft_find_next_prime(1));
	printf("%d -> %d\n", 2, ft_find_next_prime(2));
	printf("%d -> %d\n", 7853, ft_find_next_prime(7853));
	printf("%d -> %d\n", 78989, ft_find_next_prime(78989));
	printf("%d -> %d\n", 2147483643, ft_find_next_prime(2147483643));
	printf("%d -> %d\n", 2147483645, ft_find_next_prime(2147483645));
	printf("%d -> %d\n", 2147483646, ft_find_next_prime(2147483646));
	printf("%d -> %d\n", 2147483647, ft_find_next_prime(2147483647));
	printf("%d -> %d\n", 370091, ft_find_next_prime(370091));
}*/
