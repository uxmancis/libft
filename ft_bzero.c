/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 13:40:57 by uxmancis          #+#    #+#             */
/*   Updated: 2022/11/06 00:37:59 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	void	*tmp;

	tmp = s;
	while (len > 0)
	{
		*(unsigned char *) s = '\0';
		s++;
		len--;
	}
}
/*int main(void)
{
	void *b = strdup("holaquease");
//	char *nuevo_b;
	int c = '\0';
	size_t len = 2;

//	nuevo_b = malloc(sizeof(char) * 21);
//	printf("%s\n", memset(nuevo_b, c, len));
	printf("%s\n", ft_memset(b, c, len));
	return(0);
}*/
