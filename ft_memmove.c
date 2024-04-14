/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 07:09:47 by uxmancis          #+#    #+#             */
/*   Updated: 2022/11/06 00:38:30 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst2;
	unsigned char	*src2;
	size_t			i;

	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	i = 0;
	if (dst2 > src2)
	{
		while (len--)
		{
			dst2[len] = src2[len];
		}
	}
	else if (dst2 < src2)
	{
		while (i < len)
		{
			dst2[i] = src2[i];
			i++;
		}
	}
	return (dst2);
}
/*int main(void)
{
	char src[] = "consectetur";
	char dst[] = "lorem lipsum dolor sit a";

//	memmove(dst, src, 3);
	ft_memmove(dst, src, 5);
	printf("%s", dst);
	return(0);
}*/
