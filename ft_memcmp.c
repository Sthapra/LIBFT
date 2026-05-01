/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prashres <prashres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:42:56 by prashres          #+#    #+#             */
/*   Updated: 2026/04/28 14:12:51 by prashres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	const unsigned char *str1;
	const unsigned char *str2;

	i = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	
	if (n == 0)
	return (NULL);
	
	while (i < n)
	{
		if (str1[i] != str2[i])
		return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
// int main()
// {
	
// 	char *s1 = "abc";
// 	char *s2 = "abd";
	
// 	ft_memcmp(s1, s2, 3);  // returns negative (c < d)
// 	ft_memcmp(s1, s2, 2);  // returns 0 (ab == ab)
// }