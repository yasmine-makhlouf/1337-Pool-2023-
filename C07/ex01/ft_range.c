/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:39:48 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/09/03 19:22:55 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr;

	i = 0;
	ptr = (int *) malloc(sizeof(int) * (max - min));
	if (!ptr)
		return (0);
	if (min >= max)
		return (0);
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
/*
int	main (void)
{
	int	min;
	int	max;
	int i;
	int *ptr;
	int	size;
	   	
	i = 0;
	min = 1;
	max = 20;
	ptr = ft_range(min, max);
	size = max - min;
	while (i < size)
	{
		printf("%d\n", ptr[i]);
		i++;
	}
	return (0);
}*/
