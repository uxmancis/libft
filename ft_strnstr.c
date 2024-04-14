/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 21:26:29 by uxmancis          #+#    #+#             */
/*   Updated: 2022/11/05 22:16:54 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	size_t	y;
	int		z;

	i = 0;
	z = 0;
	if ((char) needle [i] == (char) '\0')
		return ((char *)haystack);
	while (len > 0 && haystack[i] != '\0')
	{
		y = 0;
		z = i;
		while (haystack[i] == needle[y] && len-- > 0)
		{
			i++;
			y++;
			if (needle[y] == '\0')
				return ((char *)(haystack + z));
		}
		if (haystack[i] == '\0')
			return (0);
		i = z + 1;
		len = len + y -1;
	}
	return (0);
}
/*int	main(void)
{
	char haystack[30] = "lorem ipsum dolor sit amet";
	char needle[10] = "ipsum";

	(printf("%s\n", ft_strnstr(haystack, needle, 15)));
	(printf("%s\n", strnstr(haystack, needle, 15)));
	return(0);
}*/
