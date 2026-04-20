/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prashres <prashres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 13:59:15 by prashres          #+#    #+#             */
/*   Updated: 2026/04/16 15:48:05 by prashres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memset (void *s, int c, size_t n) 
{
	size_t	i;
	i = 0;
	
	while (i < n)
	{
		((unsigned char *)s )[i] = (unsigned char )c;
		i++;
	}
}
// void *s is the destination where we want to fill.(could be of any data type)
// int c is the value you want to fill it with (which gets converted to unsigned char internally)
// size_t is unsigned integer (because size can never be negative)
// int main ()
// {
// 	char *s[6] = "hellop";
// 	int a = 'a';
// 	size_t n = 3;
// }