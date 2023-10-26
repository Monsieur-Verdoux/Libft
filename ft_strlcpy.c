/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:37:19 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/26 14:04:37 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

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
