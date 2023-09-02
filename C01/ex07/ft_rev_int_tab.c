/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 12:47:07 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/08/24 10:59:09 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int i;

	i = 0;
	while (i < size )
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		i++;
		size--;
	}
}

int	main (void)
{
	int size = 5;
	int tab[] = {1, 2, 9, 8, 7};
	int i;

	i = 0;
	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("%d",tab[i]);
		i++;
	}
	return (0);
}
