/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:31:39 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/27 17:37:32 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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