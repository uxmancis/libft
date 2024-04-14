/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 18:43:10 by uxmancis          #+#    #+#             */
/*   Updated: 2022/11/05 12:52:54 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char *) s + i);
	return (0);
}
/*int main(void)
{
	const char s[] = "uxue";
	int c = 'x';

	printf("%s\n", ft_strchr(s, c));
	return(0);
}*/
