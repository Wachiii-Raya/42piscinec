/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:42:04 by wchumane          #+#    #+#             */
/*   Updated: 2023/07/27 15:32:35 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	d;

	i = 0;
	if (n == 0)
		return (0);
	if (s1[0] == '\0' || s2[0] == '\0')
	{
		d = s1[i] - s2[i];
		return (d);
	}
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n - 1) && s1[i] == s2[i])
	{
		i++;
	}
	d = s1[i] - s2[i];
	return (d);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char arr[] = "Hello";
	char arr2[] = "";

	printf("mine: %d\n", ft_strncmp(arr, arr2, 5));
	printf("func: %d\n", strncmp(arr, arr2, 5));
//	printf("%d", ft_strncmp("Hello", "HelloWorld", 8));
}*/
