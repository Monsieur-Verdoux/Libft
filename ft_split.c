/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:25:03 by akovalev          #+#    #+#             */
/*   Updated: 2023/11/01 19:27:41 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Function name ft_split
Prototype char **ft_split(char const *s, char c);
Turn in files -
Parameters s: The string to be split.
c: The delimiter character.
Return value The array of new strings resulting from the split.
NULL if the allocation fails.
External functs. malloc, free
Description Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.*/

#include "libft.h"

int	is_sep(char c, char sep)
{
	if (c == sep)
		return (1);
	return (0);
}

int	count_subs(char const *s, char sep)
{
	int		count;
	int		in_subs;

	count = 0;
	in_subs = 0;
	while (*s)
	{
		if (is_sep(*s, sep))
			in_subs = 0;
		else if (!in_subs)
		{
			in_subs = 1;
			count++;
		}
		s++;
	}
	return (count);
}

void	copy_subs(const char *src, char *dest, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[len] = '\0';
}

char	**split_subs(const char *s, char c, int len, char **result)
{
	int	i;
	int	j;
	int	sub_len;
	int	start;
	int	sep_or_end;

	i = 0;
	j = 0;
	start = 0;
	while (i <= len)
	{
		sep_or_end = (is_sep(s[i], c) || i == len);
		if (sep_or_end && i > start)
		{
			sub_len = i - start;
			result[j] = (char *)malloc(sub_len + 1);
			copy_subs(&s[start], result[j], sub_len);
			j++;
		}
		if (sep_or_end)
			start = i + 1;
		i++;
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	int		num_subs;
	char	**result;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	num_subs = count_subs(s, c);
	result = (char **)malloc((num_subs + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	return (split_subs(s, c, len, result));
}

/*int	main(void) 
{
	char str[] = "123Otter2Potter345";
	char sep = '2';

    char **result = ft_split(str, sep);

    if (result) 
    {
        for (int i = 0; result[i]; i++) 
        {
            printf("Subs %d: %s\n", i, result[i]);
            free(result[i]); 
        }
        free(result);
	}
	else
        printf("Malloc Error.\n");
       return (0);
}*/