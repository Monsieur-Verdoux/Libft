/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:24:06 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/27 12:54:43 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION         top
       The memchr() function scans the initial n bytes of the memory
       area pointed to by s for the first instance of c.  Both c and the
       bytes of the memory area pointed to by s are interpreted as
       unsigned char.

RETURN VALUE         top
       The memchr() and memrchr() functions return a pointer to the
       matching byte or NULL if the character does not occur in the
       given memory area.*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (*ptr != '\0' && n > 0)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
		n--;
	}
	if (*ptr == c && c == '\0')
		return (ptr);
	return (NULL);
}

/*int	main(void)
{
	char s[] = "learning is fun";
	int c = 'a';
	char *result = ft_memchr(s, c, 30);
	char *original = memchr(s, c, 30);

 if (result != NULL)
    {
        printf("Character '%c' found at position: %ld\n", c, result - s);
    }
    else
    {
        printf("Character '%c' not found in the string.\n", c);
    }

	if (result == original)
		printf("The return values are the same");
	else
		printf("The return values are not the same");
	return (0);

}*/