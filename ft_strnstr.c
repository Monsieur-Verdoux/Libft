/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:47:42 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/31 16:33:16 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
		char *strnstr(const char *big,	const char *little, size_t len);
       The strnstr() function locates the first	occurrence of the  null-termi-
       nated  string little in the string big, where not more than len charac-
       ters are	searched.  Characters that appear after	a `\0'	character  are
       not  searched.  Since the strnstr() function is a FreeBSD specific API,
       it should only be used when portability is not a	concern.

RETURN VALUES
       If little is an empty string, big is returned; if little	occurs nowhere
       in big, NULL is returned; otherwise a pointer to	the first character of
       the first occurrence of little is returned.*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while ((haystack[i + j] == needle[j]) \
			&& haystack[i + j] != '\0' && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	char needle[] = "otter";
	char haystack[] = "pottsmotters";
	char *result;
	char *ourresult;

	ourresult = ft_strnstr(haystack, needle, 12);
	result = strnstr(haystack, needle, 12);

	printf("%s \n%s \n", haystack, ourresult);
	printf("%s \n%s \n", haystack, result);
}

note: this function segfaults on purpose when you pass NULL as needle because 
it tries to access needle[0] without verifying that needle is a valid pointer, 
but if you actually wanted it to not segfault, the check should be 
	if (needle == NULL || len == 0)
        return (char *)haystack;

also: removed check for len being == 0 because the original 
function also returns NULL in that case
*/