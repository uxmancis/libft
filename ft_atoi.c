/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 10:18:09 by uxmancis          #+#    #+#             */
/*   Updated: 2022/11/05 22:18:15 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
			i++;
		if (str[i] == '+' || str[i] == '-')
		{
			if (str[i++] == '-')
				sign = -1;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{	
			num = (num * 10) + (str[i] - 48);
			i++;
		}
		return (num * sign);
	}
	return (0);
}

/*int main(void)
{
	char *str = "   -6789";

	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));
	printf("%d\n", ft_atoi(((void *)0)));
	printf("%d\n", atoi(((void *)0)));
	return(0);
}*/
