/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:33:56 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/26 14:45:29 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION         top
       isascii()
              checks whether c is a 7-bit unsigned char value that fits
              into the ASCII character set.
RETURN VALUE         top
       The values returned are nonzero if the character c falls into the
       tested class, and zero if not.*/

//#include <stdio.h>
//#include <ctype.h>

int	ft_isascii(int c)
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
