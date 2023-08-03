/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:58:33 by wchumane          #+#    #+#             */
/*   Updated: 2023/08/03 10:07:57 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

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

int	ft_countlen(char **str, int size)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (i < size)
	{
		while (str[i][j] != '\0')
		{
			count++;
			j++;
		}
		i++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	dest = malloc((ft_countlen(strs, size) + ft_strlen(sep) * (size - 1)) + 1);
	if (!(dest))
		return (0);
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			dest[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			dest[k++] = sep[j++];
		i++;
	}
	dest[k] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char *arr[] = {"apple", "tree", "te"};
	char *arr1[] = {"apple", "tree", "te"};
	printf("%s\n", ft_strjoin(3, arr, "uuu"));
	printf("%s\n", ft_strjoin(0, arr1, "uuu"));
}*/
