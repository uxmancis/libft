/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:41:09 by uxmancis          #+#    #+#             */
/*   Updated: 2022/11/04 20:53:13 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n *(-1);
	}
	if (n == -2147483648)
	{
		ft_putstr_fd("2147483648", fd);
	}
	else if (n >= 10)
	{		
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd ((n % 10) + 48, fd);
	}
	else if (n < 10)
		ft_putchar_fd(n + 48, fd);
}
/*int main(void)
{
	int n = -2147483648;

	ft_putnbr_fd(n, 1);
	return(0);
}*/
