/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:30:04 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/30 13:00:00 by akovalev         ###   ########.fr       */
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
	char	*strim;
	char	*temp;
	int		len;
	int		i;
	int		j;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(s1);
	temp = (char *)malloc(ft_strlen(s1) + 1);
	if (temp == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0' && (is_separator(s1[i], set)))
		i++;
	len--;
	while (len > 0 && (is_separator(s1[len], set)))
		len--;
	while (i <= len)
	{
		temp[j] = s1[i];
		i++;
		j++;
	}
	temp[j] = '\0';
	strim = (char *)malloc(ft_strlen(temp) + 1);
	if (strim == NULL)
		return (NULL);
	i = 0;
	while (temp[i] != '\0')
	{
		strim[i] = temp[i];
		i++;
	}
	strim[i] = '\0';
	free(temp);
	return (strim);
}

/*int main(void)
{
	char s1[] = "123Otter2Potter345";
	char set[] = "12345";
	char *result = ft_strtrim(s1, set);

	printf("result is: %s\n", result);
	free(result);
	return (0);
}*/

/*int    is_separator(char c, char const *charset)
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


char    *ft_strtrim(char const *s1, char const *set)
{
    char    *strim;
    char    *temp;
    int    len;
    int    i;
    int    j;

    len = ft_strlen(s1);
    temp = (char *)malloc(ft_strlen(s1) + 1);
    i = 0;
    j = 0;
    while (s1[i] != '\0' && (is_separator(s1[i], set)))
        i++;
    len--;
    while (len > 0 && (is_separator(s1[len], set)))
        len--;
    while (i <= len)
    {
        temp[j] = s1[i];
        i++;
        j++;
    }
    temp[j] = '\0';
    strim = (char *)malloc(ft_strlen(temp) + 1);
    i = 0;
    while (temp[i] != '\0')
    {
        strim[i] = temp[i];
        i++;
    }
    strim[i] = '\0';
    return (strim);    
}*/