/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:34:39 by akovalev          #+#    #+#             */
/*   Updated: 2023/11/02 15:24:54 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Function name ft_lstnew
Prototype t_list *ft_lstnew(void *content);
Turn in files -
Parameters content: The content to create the node with.
Return value The new node
External functs. malloc
Description Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with
the value of the parameter ’content’. The variable
’next’ is initialized to NULL.*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*void	printlist(t_list *head)
{
	t_list	*temp = head;

	while (temp != NULL)
	{
		printf("value: %d\n", *((int *)temp->content));
		temp = temp->next;
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
	while (head)
	{
		t_list *next = head->next;
		free(head->content);
		free(head); 
		head = next;
	}
}*/
