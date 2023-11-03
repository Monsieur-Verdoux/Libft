/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:53:55 by akovalev          #+#    #+#             */
/*   Updated: 2023/11/03 19:08:30 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Function name ft_lstadd_back
Prototype void ft_lstadd_back(t_list **lst, t_list *new);
Turn in files -
Parameters lst: The address of a pointer to the first link of
a list.
new: The address of a pointer to the node to be
added to the list.
Return value None
External functs. None
Description Adds the node ’new’ at the end of the list.*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst != NULL)
	{
		if (*lst == NULL)
		{
			*lst = new;
		}
		else
		{
			last = ft_lstlast(*lst);
			last->next = new;
		}
	}
}

/*void	printlist(t_list *lst)
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
	printf("\nafter the addition: \n\n");
	value = malloc(sizeof(int));
	*value = -1;
	tmp = ft_lstnew(value);
	ft_lstadd_back(&head, tmp);
	printlist(head);
	while (head)
	{
		t_list *next = head->next;
		free(head->content);
		free(head); 
		head = next;
	}	
}*/
