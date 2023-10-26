/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:18:43 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/26 15:48:59 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if (65 <= ch && ch <= 90)
		ch = ch + 32;
	return (ch);
}

/*int main(void)
{
	int	c = 'A';
	int	c1 = 'B';

	printf("%d\n", ft_tolower(c));
	printf("%d\n", tolower(c1));
}*/