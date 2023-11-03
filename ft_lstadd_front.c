/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:02:38 by akovalev          #+#    #+#             */
/*   Updated: 2023/11/03 19:08:41 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Function name ft_lstadd_front
Prototype void ft_lstadd_front(t_list **lst, t_list *new);
Turn in files -
Parameters lst: The address of a pointer to the first link of
a list.
new: The address of a pointer to the node to be
added to the list.
Return value None
External functs. None
Description Adds the node ’new’ at the beginning of the list.*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
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
	ft_lstadd_front(&head, tmp);
	printlist(head);
	while (head)
	{
		t_list *next = head->next;
		free(head->content);
		free(head); 
		head = next;
	}	
}

//note: *(int*)(lst->content) effectively takes the void* pointer lst->content, 
//interprets it as a pointer to an integer, and then dereferences that pointer 
//to obtain the actual integer value.*/