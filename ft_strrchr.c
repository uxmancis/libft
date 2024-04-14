/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:42:02 by uxmancis          #+#    #+#             */
/*   Updated: 2022/11/06 00:38:51 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)s + i);
		}
		i--;
	}
	return (0);
}
/*int main(void)
{
	const char s[] = "uxueeequetal";
	int c = 'p';

	printf("%s\n", strrchr(s, c));
	printf("%s\n", ft_strrchr(s, c));
	return(0);
}*/
