/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:04:03 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/26 15:49:00 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (97 <= c && c <= 122)
		c = c - 32;
	return (c);
}

/*int main(void)
{
	int	c = 'a';
	int	c1 = 'b';

	printf("%d\n", ft_toupper(c));
	printf("%d\n", toupper(c1));
}*/
