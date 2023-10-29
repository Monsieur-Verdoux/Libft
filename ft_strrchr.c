/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:32:22 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/27 14:20:58 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION         top

       The strrchr() function returns a pointer to the last occurrence
       of the character c in the string s.

       Here "character" means "byte"; these functions do not work with
       wide or multibyte characters.
RETURN VALUE         top
       The strchr() and strrchr() functions return a pointer to the
       matched character or NULL if the character is not found.  The
       terminating null byte is considered part of the string, so that
       if c is specified as '\0', these functions return a pointer to
       the terminator.*/

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