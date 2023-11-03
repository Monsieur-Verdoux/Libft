/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:05:52 by akovalev          #+#    #+#             */
/*   Updated: 2023/11/03 17:33:24 by akovalev         ###   ########.fr       */
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

	if (((int)count < 0 && size != 0) || ((int)size < 0 && (int)count > 0))
		return (NULL);
	if ((int)count >= INT_MAX || (int)count <= INT_MIN || (int)size >= INT_MAX \
	|| (int)size <= INT_MIN || count >= SIZE_MAX || size >= SIZE_MAX)
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

/*int main() {
    size_t count = -5;
    size_t size = 0;

    void *ptr1 = ft_calloc(count, size);
    if (ptr1 == NULL) {
        printf("ft_calloc returned NULL for negative input.\n");
    } 
	else 
	{
        for (size_t i = 0; i < count * size; i++) 
		{
            if (*((char *)ptr1 + i) != '\0') 
			{
                printf("ft_calloc did not zero the allocated 
				memory completely.\n");
                break;
            }
        }
		printf("end of ft_calloc\n");
    }

    void *ptr2 = calloc(count, size);
    if (ptr2 == NULL) {
        printf("calloc returned NULL for negative input.\n");
    } 
	else 
	{
        for (size_t i = 0; i < count * size; i++) 
		{
            if (*((char *)ptr2 + i) != '\0') 
			{
                printf("calloc did not zero the allocated 
				memory completely.\n");
                break;
            }
        }
		printf("end of calloc\n");
    }

    if (ptr1 == ptr2) 
	{
        printf("Both ft_calloc and calloc returned the same pointer.\n");
    } 
	else
	{
	    printf("ft_calloc and calloc returned different pointers.\n");
    }

    free(ptr1);
    free(ptr2);

    return 0;
}

int main()
{
	char *ours = ft_calloc(-5, 5);
	char *actual = calloc(-5, 5);
	free(ours);

	ours[0] = 1;
	ours[1] = 2;
	ours[2] = 3;

	actual[0] = 1;
	actual[1] = 2;
	actual[2] = 3;

	if (ours[2] == actual[2])
		printf("success\n");
	else
		printf("failure\n");
}

int	main(void)
{
	char *ours;
	char *actual;
	int i;

	i = 0;

	ours = ft_calloc(5, sizeof(int));
	actual = calloc(5, sizeof(int));

	ours[0] = 1;
	ours[1] = 2;
	ours[2] = 3;

	actual[0] = 1;
	actual[1] = 2;
	actual[2] = 3;

	while (i < 5)
	{
		printf("Ours[%d]: %d\n", i, ours[i]);
		i++;
	}

	i = 0;

	while (i < 5)
	{
		printf("Actual[%d]: %d\n", i, actual[i]);
		i++;
	}

	free(ours);
	free(actual);

	return (0);
}*/