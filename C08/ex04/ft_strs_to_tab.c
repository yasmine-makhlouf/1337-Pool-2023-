/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:58:01 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/09/06 17:40:03 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	str_7sseb(char *str)
{
	int	hsseb;

	hsseb = 0;
	while (*str)
	{
		hsseb++;
		str++;
	}
	return (hsseb);
}

char	*ft_strdup(char	*str)
{
	char	*stock;
	int		hsseb;
	int		i;

	i = 0;
	hsseb = str_7sseb(str);
	stock = (char *) malloc(hsseb + 1);
	if (!stock)
		return (0);
	while (str[i])
	{
		stock[i] = str[i];
		i++;
	}
	stock[i] = '\0';
	return (stock);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*my_var;
	int			i;

	i = 0;
	my_var = (t_stock_str *) malloc (sizeof(t_stock_str) * (ac + 1));
	if (!my_var)
		return (NULL);
	while (i < ac)
	{
		my_var[i].size = str_7sseb(av[i]);
		my_var[i].copy = ft_strdup(av[i]);
		my_var[i].str = av[i];
		i++;
	}
	my_var[i].copy = 0;
	my_var[i].str = 0;
	return (my_var);
}
/*
int main(int ac, char **av)
{
	int i;

	t_stock_str *mouad = ft_strs_to_tab(ac - 1, &av[1]);
	i = 0;
	while(i < ac - 1)
	{
		printf("size: %d\n",mouad[i].size);
		printf("str: %s\n",mouad[i].str);
		printf("copy: %s\n",mouad[i].copy);
		i++;
	}
	return (0);
}*/
