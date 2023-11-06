/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:43:01 by akovalev          #+#    #+#             */
/*   Updated: 2023/11/06 13:49:08 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION         top
       The bzero() function erases the data in the n bytes of the memory
       starting at the location pointed to by s, by writing zeros (bytes
       containing '\0') to that area.*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
		*str++ = '\0';
}
