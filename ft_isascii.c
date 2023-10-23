/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:33:56 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/23 18:35:43 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_isacii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}

/*int	main(void)
{
	char	c;

	c = '1';
	printf("\n Result of our function is: %d", ft_isacii(c));
	printf("\n Result of libc function is: %d", isascii(c));
}*/
