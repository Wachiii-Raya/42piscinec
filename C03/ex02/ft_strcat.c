/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 20:08:16 by wchumane          #+#    #+#             */
/*   Updated: 2023/07/27 17:40:53 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	i = 0;
	c = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[c] = src[i];
		c++;
		i++;
	}
	dest[c] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main()

{
	char src[] = "Benguerir";
	char src2[] = "Benguerir";
	char dest[] = "1337 ";
	char dest2[] = "1337 ";
	printf("mine: %s\n", ft_strcat(dest, src));
	printf("func: %s\n", strcat(dest2, src2));
	
}*/
