/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:22:55 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/08/30 15:21:13 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	res = 1;
	i = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (nb == 0)
		return (0);
	else
	{
		while (i <= power)
		{
			res *= nb;
			i++;
		}
		return (res);
	}
}
/*
int	 main (void)
{
	int	nu;
	int	power;

	nu = 6;
	power = 0;
	printf("%d", ft_iterative_power(nu, power));
	return (0);
}*/
