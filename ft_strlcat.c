/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:37:53 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/26 14:54:32 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  DESCRIPTION         top
		strlcpy(3bsd)
       strlcat(3bsd)
              These functions copy and catenate the input string into a
              destination string.  If the destination buffer, limited by
              its size, isn't large enough to hold the copy, the
              resulting string is truncated (but it is guaranteed to be
              null-terminated).  They return the length of the total
              string they tried to create.  These functions force a
              SIGSEGV if the src pointer is not a string.
	RETURN VALUE         top
			   The following functions return the length of the total string
       that they tried to create (as if truncation didn't occur).*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	i;

	dstlen = 0;
	i = 0;
	while (dstlen < dstsize && dst[dstlen] != '\0')
		dstlen++;
	if (dstlen == dstsize)
		return (dstsize + ft_strlen(src));
	while (src[i] != '\0' && dstlen + 1 < dstsize)
	{
		dst[dstlen] = src[i];
		dstlen++;
		i++;
	}
	dst[dstlen] = '\0';
	while (src[i] != '\0')
	{
		dstlen++;
		i++;
	}
	return (dstlen);
}

/*
int	main(void)
{
	char	test[20] = "learning";
	char	target[20] = "learning";
	char	attach[20] = " is fun";
	size_t	ft;
	size_t	orginal;

	printf("*** ft results ********\n");
	ft = ft_strlcat(test, attach, 20);
	printf("-> %s\n", test);
	printf("*** orginal results ***\n");
	orginal = strlcat(target, attach, 20);
	printf("-> %s\n", target);
	if (ft == orginal)
		printf("The return values are the same");
	else
		printf("The return values are not the same");
	return (0);
}*/