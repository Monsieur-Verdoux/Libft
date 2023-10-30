/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:44:40 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/30 13:42:53 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION         top
       The memcpy() function copies n bytes from memory area src to
       memory area dest.  The memory areas must not overlap.  Use
       memmove(3) if the memory areas do overlap.
RETURN VALUE         top
       The memcpy() function returns a pointer to dest.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*pdst;
	unsigned char	*psrc;

	if (dst == NULL & src == NULL)
		return (NULL);
	i = 0;
	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	while (i < n)
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (dst);
}

/*int main(void)
{
//	char test[20] = "Learning";
//	char test2[20] = "Learning";

	void *src = NULL;
	void *dst = NULL;
	size_t n = 0;

	memcpy(dst, src, n);
	ft_memcpy(dst, src, n);

	//ft_memcpy(test+8, test, sizeof(char)*3);
	//memcpy(test2+8, test2, sizeof(char)*3);
	//printf("test after move is %s\n", test);
	//printf("test2 after move is %s\n", test2);
	return(0);
}*/
/*int	main(void)
{
	int	source[] = {1, 2, 3, 4, 5};
	int destination[5];

	ft_memcpy(destination, source, sizeof(int)*2);

	for (int i = 0; i < 5; i++)
	{
		printf("destination[%d] = %d\n", i, destination[i]);
	}
	return(0);
}*/
