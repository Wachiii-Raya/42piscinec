/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 23:22:00 by wchumane          #+#    #+#             */
/*   Updated: 2023/08/01 15:22:44 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		while (i < nb / 2 && i <= 46340)
		{
			if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("Expect: sqrt(0) = 0\n");
	printf("Result: sqrt(0) = %d\n", ft_sqrt(0));
	printf("Expect: sqrt(1) = 1\n");
	printf("Result: sqrt(1) = %d\n", ft_sqrt(1));
	printf("Expect: sqrt(2) = 0\n");
	printf("Result: sqrt(2) = %d\n", ft_sqrt(2));
	printf("Expect: sqrt(100) = 10\n");
	printf("Result: sqrt(100) = %d\n", ft_sqrt(100));
	printf("Expect: sqrt(2147395600) = 46340\n");
	printf("Result: sqrt(2147395600) = %d\n", ft_sqrt(2147395600));
	printf("Expect: sqrt(-1) = 0 [expect error]\n");
	printf("Result: sqrt(-1) = %d\n", ft_sqrt(-1));
	printf("Expect: sqrt(13) = 0 [expect not found]\n");
	printf("Result: sqrt(13) = %d\n", ft_sqrt(13));
	printf("Expect: sqrt(934247393) = 0 [expect not found]\n");
	printf("Result: sqrt(934247393) = %d\n", ft_sqrt(934247393));
	printf("Expect: sqrt(2147483647) = 0\n");
	printf("Result: sqrt(2147483647) = %d\n", ft_sqrt(2147483647));
}*/
