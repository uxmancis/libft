/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:55:08 by uxmancis          #+#    #+#             */
/*   Updated: 2022/11/05 09:51:45 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void change_number(unsigned int i, char * str1)
{
	str1[i]++;
}*/

void	ft_striteri(char *str1, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (str1[i] != '\0')
	{
		f(i, &str1[i]);
		i++;
	}
}

/*int main(void)
{
	char *str1 = "0123";
	ft_striteri(str1, change_number);
	return(0);
}*/
