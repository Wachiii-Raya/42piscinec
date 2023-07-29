/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:05:49 by wchumane          #+#    #+#             */
/*   Updated: 2023/07/20 15:50:56 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a = 17;
	int	b = 2;
	int	d;
	int	m;
	int	*div;
	int	*mod;

	div = &d;
	mod = &m;
	ft_div_mod(a, b, div, mod);
	printf("%d", d);
	printf("%d", m);
}*/
