/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:03:22 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/08/27 22:05:42 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dest_or;

	dest_or = dest;
	while (*dest)
	{
		dest++;
	}
	while (nb > 0 && *src)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (dest_or);
}
/*
int	main(void)
{
	char	dest[20] = "Hello world";
	char	src[] = "Hello lkid";
	unsigned int	nb = 20;
	
	ft_strncat(dest, src, nb);
	printf("%s",dest);
	return (0);
}*/
