/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:47:57 by uxmancis          #+#    #+#             */
/*   Updated: 2022/10/26 07:18:13 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	while (n >= 0)
	{
		if (n == 0)
			return (0);
		if (((unsigned char *) s1)[i] != ((unsigned char *) s2)[i])
			return (((unsigned char *) s1)[i] - ((unsigned char *) s2)[i]);
		if (((unsigned char *) s1)[i] == ((unsigned char *) s2)[i])
			i++;
		n--;
	}
	return (0);
}
/*int main(void)
{ 
	char s1[] = "helo";
	char s2[] = "heLlo";

//	printf("%d\n", memcmp(s1, s2, 2));
	printf("%d\n", ft_memcmp(s1, s2,3));
	return(0);
}*/
