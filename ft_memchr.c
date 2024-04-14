/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:27:30 by uxmancis          #+#    #+#             */
/*   Updated: 2022/11/05 23:28:14 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		if (((unsigned char *) s)[i] == (unsigned char) c)
			return ((unsigned char *) s + i);
		i++;
		n--;
	}
	return (0);
}
/*int main(void)
{
	char s[] = "uxue"; 
	int c = 'x';

//	printf("%s\n", memchr(s, c, 1));
	printf("%s\n", ft_memchr(s, c, 3));
	return(0);
}*/
