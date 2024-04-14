/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:35:05 by uxmancis          #+#    #+#             */
/*   Updated: 2022/10/16 09:53:07 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 0177);
}

/*int main(void)
{
	int c; 
	
	c = 300;
	ft_isascii (c);
	return(0);
}*/
