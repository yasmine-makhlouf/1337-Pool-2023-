/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:26:21 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/08/31 16:50:58 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if ((s1[i] - s2[i]) == 0)
		{
			i++;
		}
		else
			break ;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **ptr1, char **ptr2)
{
	char	*swap;

	swap = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = swap;
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i < ac - 1)
	{
		while (j < ac - 1)
		{
			if ((ft_strcmp(av[j], av[j + 1])) > 0)
				ft_swap(&av[j], &av[j + 1]);
			j++;
		}
		i++;
		j = 1;
	}
	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
