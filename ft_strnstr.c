/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:47:42 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/27 17:24:28 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;

	if (needle[0] == '\0' || len == 0)
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
*/