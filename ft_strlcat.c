/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prashres <prashres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 12:20:34 by prashres          #+#    #+#             */
/*   Updated: 2026/04/21 14:48:46 by prashres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t j;
	size_t dstlen;
	size_t srclen;
	size_t i;
	
	j = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = dstlen;
	
	if (size == 0)
	return (dstlen + srclen);

	if (size <= dstlen)
		return (size + srclen);
	while (src[j] && dstlen < (size - 1))
	{
		dst[dstlen] = src[j];
		dstlen++;
		j++;
	}
	dst[dstlen] = '\0';
	return (i + srclen);
}
int main(void)
{
    char    str1[0] = "Have";
    const char    *str2 = "We";
	size_t i = sizeof(str1);
	printf ("%zu is the length of final result", ft_strlcat(str1, str2, i));
	
} 