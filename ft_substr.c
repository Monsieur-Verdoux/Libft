/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:31:39 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/30 12:57:42 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Function name ft_substr
Prototype char *ft_substr(char const *s, unsigned int start,
size_t len);
Turn in files -
Parameters s: The string from which to create the substring.
start: The start index of the substring in the
string ’s’.
len: The maximum length of the substring.
Return value The substring.
NULL if the allocation fails.
External functs. malloc
Description Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	char	*sub;
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (start >= ft_strlen(s))
	{
		sub[0] = '\0';
		return (sub);
	}
	if (sub == NULL)
		return (NULL);
	while (len > i && s[start] != '\0')
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

/*int	main(void)
{
	char	string[] = "Plotter Otter";

	printf("Result: %s\n", ft_substr(string, 8, 5));

	return (0);
}*/