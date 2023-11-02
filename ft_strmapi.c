/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:18:01 by akovalev          #+#    #+#             */
/*   Updated: 2023/11/02 12:10:47 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Function name ft_strmapi
Prototype char *ft_strmapi(char const *s, char (*f)(unsigned
int, char));
Turn in files -
Parameters s: The string on which to iterate.
f: The function to apply to each character.
Return value The string created from the successive applications
of ’f’.
Returns NULL if the allocation fails.
External functs. malloc
Description Applies the function ’f’ to each character of the
string ’s’, and passing its index as first argument
to create a new string (with malloc(3)) resulting
from successive applications of ’f’.*/

#include "libft.h"

/*char	nextchar(unsigned int i, char c)
{
	(void)i;
	c = c + 1;
	return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstr;
	unsigned int	i;
	unsigned int	len;

	if (s == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	newstr = (char *)malloc(len + 1);
	if (!newstr)
		return (NULL);
	while (i < len)
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

/*int	main(void)
{
	char	*s = "abcde";
	
	printf("result is: %s\n", ft_strmapi(s, nextchar));
	return (0);
}*/
