/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:19:04 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/09/03 19:22:39 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_count(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *) malloc(ft_count(src) + 1);
	if (!ptr)
		return (0);
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int	 main (void)
{
	char	str[] = "Hello";

	printf("%s\n", ft_strdup(str));
	return (0);
}*/
