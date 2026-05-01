/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prashres <prashres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 14:41:39 by prashres          #+#    #+#             */
/*   Updated: 2026/05/01 18:55:11 by prashres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t count_words(char const *s ,char c)
{
	size_t i;
	size_t count;
	
	count = 0;
	i = 0;
	while (s[i])
	{
		while(s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	printf("%zu\n", count);
	return (count);
}

void ft_free(char **s , int c)
{
	while (c > 0)
	{
		c--;
		free (s[c]);
	}
}

char **build_array(char **array, const char *s, char c, int idx)
{
	int	start;
	int	len;
	int	strings;

	strings = 0;
	while (s[idx])
	{
		len = 0;
		while (s[idx] && s[idx] == c)
			idx++;
		if (s[idx] && s[idx] != c)
		{
			start = idx;
			while (s[idx] && s[idx] != c)
			{
				len++;
				idx++;
			}
			array[strings] = ft_substr(s, start, len);
			if (!array[strings])
				return (ft_free(array, strings), NULL);
			strings++;
		}
	}
	return (array);
}

char **ft_split(char const *s, char c)
{
	char **array;
	int	words;

	words = count_words(s, c);
	if (words == 0)
		return (NULL);
	array = malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	array = build_array(array, s, c, 0);
	if (!array)
		return (NULL);
	array[words + 1] = NULL;
	return (array);
}

/* static size_t get_word(char const *s, char c)
{
	size_t j;
	size_t i;

	j = 0;
	i = 0;
		while(s[i] && s[i] == c)
			i++;
		while(s[i] != c && s[i])
		{
			j++;
			i++;
		}
		return (j);
} */

/* static size_t jump(char const *s, char c)
{
	size_t i = 0;
	while(s[i] && s[i] == c)
		i++;
	return i;
} */

/* char **ft_split(char const *s, char c)
{
	char **result;
	size_t i;
	size_t k ;
	size_t strings;
	
	strings=0;
	i = 0;
	k = count_words(s , c);
	if (k == 0)
		return (NULL);

	result = malloc(k * sizeof (char *) + sizeof(char *));
	if (!result)
		return (NULL);
	while (strings < k)
	{
		result[strings] = malloc(get_word(s, c) + 1);
		
		if (!result[strings])
			return (ft_free (result, i), NULL);
		i = jump(&s[i], c);
		result[strings] = ft_substr(s, i, get_word(&s[i], c));
		strings++;
	}
	result[i] = NULL;
	return (result);	
} */

int main(int ac, char **av)
{
	if (ac != 3)
		return (1);
	char *s = av[1];
	char **d;
	size_t i = 0;
	char c = av[2][0];
	d = ft_split(s, c);
	while (d[i] != NULL)
	{
		printf("%s\n", d[i]);
		i++;
	}
	return (0);
}
