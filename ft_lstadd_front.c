/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 19:01:49 by prashres          #+#    #+#             */
/*   Updated: 2026/05/14 12:18:03 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h> 
// int main(void)
// {
//    t_list *first;
//    t_list *second;
//    first = ft_lstnew("world");
//    second = ft_lstnew("hello");
//    ft_lstadd_front(&first, second);
//    printf("%s\n", (char *)first->content);
//    printf("%s", (char *)first->next->content);
// }