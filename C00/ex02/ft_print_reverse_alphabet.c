/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:14:39 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/08/17 12:14:15 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	rev_alpha; 

	rev_alpha = 'z';
	while (rev_alpha >= 'a')
	{
		write(1, &rev_alpha, 1);
		rev_alpha--;
	}
}
