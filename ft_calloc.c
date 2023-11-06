/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:05:52 by akovalev          #+#    #+#             */
/*   Updated: 2023/11/06 12:10:25 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION         top
		void *calloc(size_t nelem, size_t elsize);
       The calloc() function shall allocate unused space for an array of
       nelem elements each of whose size in bytes is elsize.  The space
       shall be initialized to all bits 0.
       
RETURN VALUE         top
       Upon successful completion with both nelem and elsize non-zero,
       calloc() shall return a pointer to the allocated space. If either
       nelem or elsize is 0, then either:

        *  A null pointer shall be returned and errno may be set to an
           implementation-defined value, or

        *  A pointer to the allocated space shall be returned. The
           application shall ensure that the pointer is not used to
           access an object.

       Otherwise, it shall return a null pointer and set errno to
       indicate the error.*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;

	//if (((int)count < 0 && size != 0) || ((int)size < 0 && (int)count > 0))
	//	return (NULL);
	//if ((int)count >= INT_MAX || (int)count <= INT_MIN || (int)size >= INT_MAX \
	//|| (int)size <= INT_MIN || count >= SIZE_MAX || size >= SIZE_MAX)
	//	return (NULL);
	if (count != 0 && count * size / count != size)
		return (NULL);
	i = 0;
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	while (i < count * size)
	{
		*(ptr + i) = '\0';
		i++;
	}
	return (ptr);
}
