/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prashres <prashres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 15:41:49 by prashres          #+#    #+#             */
/*   Updated: 2026/04/17 14:40:29 by prashres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <stdlib.h>

int	ft_isalpha(int c);
int ft_isalnum (int c);
int ft_isascii (int c);
int ft_isdigit (int c);
int	ft_isprint (int c);
int ft_atoi (const char *nptr);
int ft_tolower(int c);
int ft_toupper(int c);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlen (const char *str);

void *memset (void *s, int c, size_t n);
void bzero (void *s, size_t n);

#endif