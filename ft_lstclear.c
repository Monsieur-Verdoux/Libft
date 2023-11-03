/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:24:54 by akovalev          #+#    #+#             */
/*   Updated: 2023/11/03 19:18:59 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Function name ft_lstclear
Prototype void ft_lstclear(t_list **lst, void (*del)(void
*));
Turn in files -
Parameters lst: The address of a pointer to a node.
del: The address of the function used to delete
the content of the node.
Return value None
External functs. free
Description Deletes and frees the given node and every
successor of that node, using the function ’del’
and free(3).
Finally, the pointer to the list must be set to
NULL.*/

#include "libft.h"



void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst)
	{
		while (lst && *lst)
		{
			temp = (*lst)->next;
			if (del)
				del((*lst)->content);
			free (*lst);
			*lst = temp;
		}
		*lst = NULL;
	}
}

/*void del(void *content)
{
	if (content)
		free(content);
}

void	printlist(t_list *lst)
{
	while (lst)
	{
		printf("value: %d\n", *((int *)lst->content));
		lst = lst->next;
	}
}

int	main(void)
{
	t_list	*head = NULL;
	t_list	*tmp;
	int		i;
	int		*value;

	i = 0;
	while (i <= 5)
	{
		value = malloc(sizeof(int));
		*value = i;
		tmp = ft_lstnew(value);
		tmp->next = head;
		head = tmp;
		i++;
	}
	printlist(head);
	printf("\nafter the freeing: \n\n");
	ft_lstclear(&head, del);
	printlist(head);
}*/
