/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 23:05:39 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/08/25 23:07:54 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lower(char *str1)
{
	while (*str1)
	{
		if (*str1 >= 'A' && *str1 <= 'Z')
			*str1 += 32;
		str1++;
	}
	return (str1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	tr;

	i = 0;
	tr = 1;
	ft_lower(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (tr == 1)
				str[i] -= 32;
			tr = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			tr = 0;
		else
			tr = 1;
		i++;
	}
	return (str);
}
