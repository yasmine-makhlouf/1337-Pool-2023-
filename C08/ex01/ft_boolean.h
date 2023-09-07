/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:59:13 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/09/06 17:43:21 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0
# define TRUE true
# define FALSE false

typedef enum yasmine
{
	false = 0,
	true = 1
}	t_bool;

# define EVEN(nbr) ((nbr) % 2 == 0)

#endif
