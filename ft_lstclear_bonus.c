/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:20:14 by nbenyahy          #+#    #+#             */
/*   Updated: 2023/10/13 21:58:10 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void deleteString(void *s)
// {
// 	free(s);
// }

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst)
	{
		temp = *lst;
		*lst = (*lst)->next;
		del(temp->content);
		free(temp);
	}
	*lst = NULL;
}

// int main()
// {
//     t_list *node = NULL;
//     ft_lstadd_back(&node, ft_lstnew("abc1"));
//     ft_lstadd_back(&node, ft_lstnew("abc2"));
//     ft_lstadd_back(&node, ft_lstnew("abc3"));

//     t_list *current = node;
//     while (current != NULL)
//     {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }

//     ft_lstclear(&node, deleteString);

//     // Do not access the 'node' pointer after clearing the list
//     // It has been freed and can't be accessed anymore

//     return 0;
// }
