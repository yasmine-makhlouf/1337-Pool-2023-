/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:42:17 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/09/04 17:14:31 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ptr;
	int	size;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	ptr = (int *) malloc(sizeof(int) * (size));
	if (!ptr)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	*range = ptr;
	return (size);
}
/*
int	main (void)
{
	int	min;
	int	max;
	int	i;
	int	*store;
	int	size;
	int s;
	i = 0;
	min = 1;
	max = 5;
	size = max - min;
	s = ft_ultimate_range(&ptr, min, max);
	printf("%d\n", s);
	while (i < size)
	{
		printf("%d ",ptr[i]);
		i++;
	}
	return (0);
}*/
