/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:39:01 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/08/29 19:53:25 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	fact = 1;
	i = 0;
	if (nb == '0')
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		while (i < nb)
		{
			fact *= nb - i;
			i++;
		}
	}
	return (fact);
}
/*
int	main(void)
{
	int	nu;
	int	fact;

	nu = 1;
	fact = ft_iterative_factorial(nu);
	printf("here's the factorial : %d", fact);
	return (0);
}*/
