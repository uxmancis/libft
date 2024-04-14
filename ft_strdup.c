/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:25:42 by uxmancis          #+#    #+#             */
/*   Updated: 2022/10/28 18:27:05 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	size;

	size = ft_strlen(s1);
	dst = malloc (sizeof(char) * (size + 1));
	if (!dst)
		return (0);
	ft_memcpy (dst, s1, size + 1);
	*(dst + size) = '\0';
	return (dst);
}

/*int main(void)
{
	char s1[] = "uxue";

	printf("%s\n", strdup(s1));
	printf("%s\n", ft_strdup(s1));
}*/
