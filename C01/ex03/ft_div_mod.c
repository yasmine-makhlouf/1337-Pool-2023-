/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 22:49:25 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/08/24 11:18:05 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	 main (void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 30;
	b = 5;
	
	ft_div_mod(a, b, &div, &mod);
	printf("div = %d and mod= %d",div,mod);
	return (0);
}
