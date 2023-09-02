/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:39:40 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/08/24 11:10:44 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while(str[i])
	{
		write(1, &str[i] ,1);
		i++;
	}
}

int	main(void)
{
	char string[]= "hello";
	ft_putstr(string);
	return(0);
}
