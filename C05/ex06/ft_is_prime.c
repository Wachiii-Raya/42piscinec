/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 00:13:40 by wchumane          #+#    #+#             */
/*   Updated: 2023/08/01 01:01:29 by wchumane         ###   ########.fr       */
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
/*
#include <stdio.h>
int main (void)
{
	printf("%d -> %d\n", -3965, ft_is_prime(-3965));
	printf("%d -> %d\n", -12, ft_is_prime(-12));
	printf("%d -> %d\n", 0, ft_is_prime(0));
	printf("%d -> %d\n", 1, ft_is_prime(1));
	printf("%d -> %d\n", 2, ft_is_prime(2));
	printf("%d -> %d\n", 4219, ft_is_prime(4219));
	printf("%d -> %d\n", 7853, ft_is_prime(7853));
	printf("%d -> %d\n", 78989, ft_is_prime(78989));
	printf("%d -> %d\n", 2147483647, ft_is_prime(2147483647));
	printf("%d -> %d\n", 200, ft_is_prime(200));
}*/
