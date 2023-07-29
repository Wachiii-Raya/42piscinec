/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 21:21:40 by wchumane          #+#    #+#             */
/*   Updated: 2023/07/27 15:37:17 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char	*str, char *to_find)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		c = 0;
		while (str[i + c] == to_find[c])
		{
			if (to_find[c + 1] == '\0')
				return (&(str[i]));
			c++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char str[] = "twttw hell ijedh";
	char find[] = "abcd";
	printf("%s\n", ft_strstr(str, find));
	printf("%s\n", strstr(str, find));
	
}*/
