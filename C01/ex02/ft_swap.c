/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:24:49 by wchumane          #+#    #+#             */
/*   Updated: 2023/07/20 15:56:45 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include<stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	temp1;

	temp1 = *a;
	*a = *b;
	*b = temp1;
}
/*
int	main(void)
{
	int	*ptr_a;
	int	*ptr_b;
	int	a;
	int	b;
	
	a = 2;
	b = 7;
	ptr_a = &a; // 2
	ptr_b = &b;
	ft_swap(ptr_a, ptr_b);
	printf("%d", a);
	printf("%d", b);
}*/
