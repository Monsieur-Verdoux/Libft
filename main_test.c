/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:06:09 by akovalev          #+#    #+#             */
/*   Updated: 2023/11/02 15:24:56 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	nextchar_striteri(unsigned int i, char *c)
{
	(void)i;
	(*c)++;
}

char	nextchar_strmapi(unsigned int i, char c)
{
	(void)i;
	c = c + 1;
	return (c);
}

void	printlist(t_list *head)
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
	//test for strmapi
	
	char	s[] = "abcde";
	
	printf("ft_strmapi result for abcde is: %s\n", ft_strmapi(s, nextchar_strmapi));
	printf("\n");
	//test for striteri
	char	s1[] = "bcdef";
	
	//printf("before ft_striteri result is: %s\n", s1);
	ft_striteri(s1, nextchar_striteri);
	printf("ft_striteri result for bcdef is: %s\n", s1);
	printf("\n");
	//test for lstnew

	
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
	printf("ft_lstnew result for 0-5 is: \n");
	printlist(head);
	printf("\n");
	while (head)
	{
		t_list *next = head->next;
		free(head->content);
		free(head); 
		head = next;
	}

	return (0);
}