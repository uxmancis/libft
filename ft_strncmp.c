/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 21:07:10 by uxmancis          #+#    #+#             */
/*   Updated: 2022/10/23 10:13:54 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] == s2[i])
		{	
			i++;
		}
		else
			return ((unsigned char ) s1[i] - (unsigned char) s2[i]);
	}
	return (0);
}

/*int main(void)
{
	const char *s1 = "abcd";
	const char *s2 = "abCd";
	const char *s3 = "abcd";

	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", strcmp(s2, s1));
	printf("%d\n", strcmp(s1, s3));

	printf("%d\n", ft_strcmp(s1, s2));
	return(0);
}*/
