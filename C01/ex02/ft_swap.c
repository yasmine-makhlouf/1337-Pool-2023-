/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 22:41:58 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/08/20 22:47:54 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	 main(void)
{
	int a;
	int b;

	a = 40;
	b = 20;
	ft_swap(&a, &b);
	printf("a= %d and b= %d",a,b);
	return (0);
}
