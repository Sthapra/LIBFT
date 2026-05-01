/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prashres <prashres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:13:06 by prashres          #+#    #+#             */
/*   Updated: 2026/04/24 14:42:25 by prashres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *a;
	const unsigned char *b;
	
	if (!dest && !src)
	return (NULL);
	
	i = 0;
	a = (unsigned char *)dest;
	b = (const unsigned char *)src;
	
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dest);
}