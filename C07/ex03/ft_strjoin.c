/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:23:42 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/09/04 15:19:26 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		g_7sseb;
int		g_i;
int		g_j;
char	*g_str;

int	str_len(char *str)
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

int	str_7sseb(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += str_len(strs[i]);
		if (i < size - 1)
			len += str_len(sep);
		i++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	g_i = 0;
	g_j = 0;
	g_7sseb = str_7sseb(size, strs, sep);
	g_str = (char *) malloc(g_7sseb + 1);
	if (!(g_str))
		return (0);
	if (size == 0)
	{
		*g_str = '\0';
		return (g_str);
	}
	while (g_i < size)
	{
		ft_strcpy(&g_str[g_j], strs[g_i]);
		g_j += str_len(strs[g_i]);
		if (g_i < size - 1)
		{
			ft_strcpy(&g_str[g_j], sep);
			g_j += str_len(sep);
		}
		g_i++;
	}
	g_str[g_j] = '\0';
	return (g_str);
}
/*
int	main (void)
{
	int		size = 3;
	char	*ptr[] = {"Hello", "mouad", "yasmine"};
	char	sep[] = "**";
	char	*con = ft_strjoin(size, ptr, sep);
	printf("%s\n",con);
	return (0);
}*/
