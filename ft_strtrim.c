/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:30:04 by akovalev          #+#    #+#             */
/*   Updated: 2023/11/01 14:37:06 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Function name ft_strtrim
Prototype char *ft_strtrim(char const *s1, char const *set);
Turn in files -
Parameters s1: The string to be trimmed.
set: The reference set of characters to trim.
Return value The trimmed string.
NULL if the allocation fails.
External functs. malloc
Description Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.*/

#include "libft.h"

int	is_separator(char c, char const *charset)
{
	while (*charset)
	{
		if (*charset == c)
		{
			return (1);
		}
		charset++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*strim;
	int		i;
	int		j;
	int		new_len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(s1) - 1;
	i = 0;
	j = 0;
	while (s1[i] != '\0' && (is_separator(s1[i], set)))
		i++;
	while (len > 0 && (is_separator(s1[len], set)))
		len--;
	new_len = len - i + 1;
	if (new_len < 0)
		new_len = 0;
	strim = (char *)malloc(new_len + 1);
	if (strim == NULL)
		return (NULL);
	while (i <= len)
		strim[j++] = s1[i++];
	strim[j] = '\0';
	return (strim);
}

/*int main(void)
{
    char s1[] = "  \t \t \n   \n\n\n\t";
    char set[] = "";
    char *result = ft_strtrim(s1, set);

    printf("result is: %s\n", result);
    free(result);
    return (0);
}

int main(void)
{
	char s1[] = "123Otter2Potter345";
	char set[] = "12345";
	char *result = ft_strtrim(s1, set);

	printf("result is: %s\n", result);
	free(result);
	return (0);
}

note: new_len calculation needs to handle the case when set 
is an empty string. check if new_len is negative and = 0.  
*/