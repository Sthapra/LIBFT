/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prashres <prashres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 19:21:51 by prashres          #+#    #+#             */
/*   Updated: 2026/05/08 19:30:31 by prashres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast (t_list *lst)
{
	if (!lst)
		return (NULL);
	while(lst->next != NULL)
		lst = lst->next; 
	return (lst);
}

