/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prashres <prashres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 16:25:20 by prashres          #+#    #+#             */
/*   Updated: 2026/04/20 14:43:52 by prashres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{

while (*s)
{
    if (*s == c)
	{
        return ((char *)s);
	}
    s++;
}
if (*s == c)
{
	return ((char *)s);
}
return (NULL);
}


int main ()
{
	char *s = "sdf";
	int a = 'd';
	printf("%s\n", ft_strchr(s , a));
	printf("%s\n", strchr(s , a));
	
}
