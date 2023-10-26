/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:32:22 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/26 17:01:02 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*s_end;

	s_end = s + ft_strlen(s);

	while (s_end >= s)
	{
		if (*s_end == c)
			return ((char *)(s_end));
		s_end--;
	}
	return (NULL);
}

/*int	main(void)
{
	char s[] = "learning is fun";
	int c = '\0';
	char *result = ft_strrchr(s, c);

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