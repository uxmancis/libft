/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:07:24 by uxmancis          #+#    #+#             */
/*   Updated: 2022/11/06 00:27:37 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dstsize)
		return (ft_strlen(src));
	i = -1;
	while (src[++i] && i < dstsize -1)
		dst[i] = src[i];
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*int main(void)
{
	char dst[100] = "Hola me xa";
	char src[] = "llamo Uxue";
	size_t dstsize = ft_strlen(dst);
	
//	printf("%d", ft_strlen(dst));
	ft_strlcpy(dst, src, dstsize);
	return(0);
}*/
