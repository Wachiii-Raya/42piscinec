/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 01:17:29 by wchumane          #+#    #+#             */
/*   Updated: 2023/07/27 16:36:39 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	if (size <= ft_strlen(dest))
		return (ft_strlen(src) + size);
	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[j]));
}
/*
#include <stdio.h>
#include <string.h>
int main (void)
{
	char dest[10] = "hell";
  	char src[] = "meow wang";
	char dest2[10] = "hell";
	char src2[] = "meow wang";
	printf("size_mine: %d\n", ft_strlcat(dest, src, 10));
	printf("mine: %s\n", dest);
	printf("size_func: %lu\n", strlcat(dest2, src2, 10));
	printf("func: %s\n", dest2);
}*/
