/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:33:19 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/26 14:45:31 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION         
     isalnum() checks for an alphanumeric character; it is equivalent to
              (isalpha(c) || isdigit(c)).
RETURN VALUE         
       The isalnum() and isalnum_l() functions shall return non-zero if
       c is an alphanumeric character; otherwise, they shall return 0.*/

//#include <stdio.h>
//#include <ctype.h>

int	ft_isalnum(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')
		|| ('0' <= c && c <= '9'))
		return (1);
	return (0);
}

/*int	main(void)
{
	char	c;

	c = '1';
	printf("\n Result of our function is: %d", ft_isalnum(c));
	printf("\n Result of libc function is: %d", isalnum(c));
}*/
