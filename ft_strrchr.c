/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prashres <prashres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 12:40:59 by prashres          #+#    #+#             */
/*   Updated: 2026/04/20 13:33:44 by prashres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	while (*s)
	{
		*s++;
	}
	while (*s > 0 && *s--)
	{
		if (*s == c)
		{
			return ((char *)s);
			*s++;
		}
	}
	if (*s == c)
	{
		return ((char *)s);
	}
	return(NULL);
}
int main ()
{
	char *s = "sdfgdsg";
	int a = 'd';
	printf("%s\n", ft_strrchr(s , a));
	printf("%s\n", strrchr(s , a));
	
}