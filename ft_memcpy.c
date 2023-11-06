/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:44:40 by akovalev          #+#    #+#             */
/*   Updated: 2023/11/06 11:31:22 by akovalev         ###   ########.fr       */
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
