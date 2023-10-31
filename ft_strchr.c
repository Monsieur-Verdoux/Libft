/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:04:43 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/31 16:59:49 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION         top
       The strchr() function returns a pointer to the first occurrence
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

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
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
}
note: it failed 
res = single_test_strchr(5, "teste", 'e' + 256) && res;
	res = single_test_strchr(6, "teste", 1024) && res;
because c is an int with a value outside the valid range of a char.

When you use an int as c and compare it directly to a char 
(as is done in the code), you are potentially working with different 
data types, and this can lead to issues, especially if the int value 
is outside the valid range for a char.
If you have an int with a value greater than 255 (outside the char range, 
which is -128 to 127 or 0 to 255 for unsigned),
 the conversion to char ensures that the value is treated as a valid ASCII
 value within the char range.
*/