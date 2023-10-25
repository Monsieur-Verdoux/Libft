/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:46:36 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/25 18:47:22 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
