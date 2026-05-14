/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prashres <prashres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:32:48 by prashres          #+#    #+#             */
/*   Updated: 2026/05/13 15:47:14 by prashres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*a;
	const unsigned char	*b;

	if (dest == src || n == 0)
		return (dest);
	i = 0;
	a = (unsigned char *)dest;
	b = (const unsigned char *)src;
	if (a > b)
	{
		while (n--)
			a[n] = b[n];
	}
	else
		ft_memcpy(a, b, n);
	return (dest);
}

#include <stdio.h>
int main()
{
	char dest[] = "1234567";
	void *after = ft_memmove(dest + 2, dest, 3);
	char *res = after;
	printf("should be 12367, res = %s\n", res); 
	return 0;
}