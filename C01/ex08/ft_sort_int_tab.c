/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:33:00 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/08/21 16:09:44 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int i;

	i = 0;
	while(i < size)
	{
		if(tab[i] > tab[i+1])
		{
			temp = tab[i];
			tab[i] = tab[i+1];
			tab[i+1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

int	main(void)
{
	int tab[] = {5, 8, 4, 3, 7, 2, 1};
	int size;
	int i;

	i = 0;
	size = 7;
	ft_sort_int_tab(tab, size);
	while(i < size)
	{
		printf("%d",tab[i]);
		i++;
	}
	return (0);
}
