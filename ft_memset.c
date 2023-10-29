/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:46:36 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/26 14:45:35 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION         top
       The memset() function fills the first n bytes of the memory area
       pointed to by s with the constant byte c.
RETURN VALUE         top
       The memset() function returns a pointer to the memory area s.*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	ch;

	i = 0;
	ch = (unsigned char)c;
	str = (unsigned char *)b;
	while (i < len)
	{
		str[i] = ch;
		i++;
	}
	return (b);
}
/*int	main(void)
{
	char	str[] = "string";
	ft_memset(str, '$', 3);

	printf("%s", str); 

}*/
