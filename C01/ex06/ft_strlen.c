/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 12:35:48 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/08/24 11:09:53 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);

}
int	main(void)
{
	int count;
	char str[] = "yasmine makh";
	count = ft_strlen(str);	
	printf("%d", count);
	return (0);
}
