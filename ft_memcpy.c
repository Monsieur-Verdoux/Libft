/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:44:40 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/24 18:40:59 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t			i;
	unsigned char	*pdst;
	unsigned char	*psrc;

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
