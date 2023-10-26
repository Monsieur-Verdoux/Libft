/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:04:43 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/26 18:44:25 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (*s == c && c == '\0')
		return ((char *)s);
	return (NULL);
}

/*int	main(void)
{
	char s[] = "learning is fun";
	int c = '\0';
	char *result = ft_strchr(s, c);

 if (result != NULL)
    {
        printf("Character '%c' found at position: %ld\n", c, result - s);
    }
    else
    {
        printf("Character '%c' not found in the string.\n", c);
    }
	return (0);
}*/