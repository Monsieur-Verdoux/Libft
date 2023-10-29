/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:46:13 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/26 14:45:33 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION         top
       isprint()
              checks for any printable character including space.
RETURN VALUE         top
       The values returned are nonzero if the character c falls into the
       tested class, and zero if not.*/

//#include <stdio.h>
//#include <type.h>

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	return (0);
}
/*int    main(void)
{
    char    c;

    c = ')';
    printf("\n Result of our function is: %d", ft_isprint(c));
    printf("\n Result of libc function is: %d", isprint(c));
}*/
