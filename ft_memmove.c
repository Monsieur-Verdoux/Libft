/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:50:57 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/25 17:10:41 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*pdst;
	const unsigned char	*psrc;
	unsigned char		*last_dst;
	const unsigned char	*last_src;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	if (pdst < psrc)
		while (len--)
			*pdst++ = *psrc++;
	else
	{
		last_dst = (unsigned char *)dst + (len - 1);
		last_src = (unsigned char *)src + (len - 1);
		while (len--)
			*last_dst-- = *last_src--;
	}
	return (dst);
}

/*int	main(void)

{
	int	source[] = {1, 2, 3, 4, 5};
	int destination[5];

	ft_memmove(destination, source, sizeof(int)*2);

	for (int i = 0; i < 5; i++)
	{
		printf("destination[%d] = %d\n", i, destination[i]);
	}
	return(0);
}*/
/*int main()  
{  
char csrc[100] = "Geeksfor";  
printf("%s", ft_memmove(csrc+5, csrc, strlen(csrc)+1));  
return 0;  
}*/