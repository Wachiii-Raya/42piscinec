/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:12:50 by wchumane          #+#    #+#             */
/*   Updated: 2023/07/19 23:56:10 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
   str[] is the one pattern of declaration of pointer
   *ptr_str = &str /
   ptr_str = str /
   */
/*#include <stdio.h>*/

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
/*
int	main(void)
{
	char	str[] = "hello hungry";
	char	*ptr_str;
	int	length;

	ptr_str = str;
	length = ft_strlen(ptr_str);
	printf("%d", length); 
}*/
