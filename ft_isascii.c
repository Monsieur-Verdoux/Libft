/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:33:56 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/25 19:04:45 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
