/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:26:06 by uxmancis          #+#    #+#             */
/*   Updated: 2022/10/16 09:38:23 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') \
			|| (c >= 'A' && c <= 'Z') \
			|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*int	main(void)
{
	int	c;

	c = '7';
	ft_isalnum (c);
	return (0);
	idea para ft_isalnum(int c) a preguntar a alguien:
	if (ft_isalnum(c) = 1 && ft_isdigit(c) = 1)
		return(1)
	return(0);
}*/
