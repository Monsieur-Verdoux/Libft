/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:37:19 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/25 17:38:10 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	copylen;
	size_t	srclen;

	srclen = 0;
	copylen = 0;
	while (src[srclen] != '\0' && srclen < dstsize - 1)
		srclen++;
	while (copylen < srclen && copylen < dstsize - 1)
	{
		dst[copylen] = src[copylen];
		copylen++;
	}
	dst[copylen] = '\0';
	return (srclen);
}

/*int	main(void)
{
}*/