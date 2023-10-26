/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:37:19 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/26 14:54:23 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;

	srclen = 0;
	if (dstsize > 0)
	{
		while (srclen < dstsize - 1 && src[srclen] != '\0')
		{
			dst[srclen] = src[srclen];
			srclen++;
		}
		if (srclen < dstsize)
			dst[srclen] = '\0';
	}
	while (src[srclen] != '\0')
		srclen++;
	return (srclen);
}
/*
int	main(void)
{
	char	test[20] = "learning";
	char	target[20] = "learning";
	char	attach[20] = " is fu";
	size_t	ft;
	size_t	orginal;

	printf("*** ft results ********\n");
	ft = ft_strlcpy(test, attach, 20);
	printf("-> %s\n", test);
	printf("*** orginal results ***\n");
	orginal = strlcpy(target, attach, 20);
	printf("-> %s\n", target);
	if (ft == orginal)
		printf("The return values are the same");
	else
		printf("The return values are not the same");
	return (0);
}*/