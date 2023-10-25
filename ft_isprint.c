/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:46:13 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/25 15:12:20 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
