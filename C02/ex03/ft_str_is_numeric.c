/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 02:20:52 by wchumane          #+#    #+#             */
/*   Updated: 2023/07/29 15:36:26 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char	test[] = "2323";
	char	test2[] = "";
	int	a;
	int	b;

	b = ft_str_is_numeric(test2);
	a = ft_str_is_numeric(test);
	printf("%d", b);
	printf("%d", a);
}*/
