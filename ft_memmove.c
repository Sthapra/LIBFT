/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prashres <prashres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:32:48 by prashres          #+#    #+#             */
/*   Updated: 2026/04/24 14:51:56 by prashres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *a;
	const unsigned char *b;
	
	if (!dest && !src)
	return (NULL);
	
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