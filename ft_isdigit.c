/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:34:15 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/26 14:45:32 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

/*int	main(void)
{
	char	c;

	c = 'Q';
	printf("\n Result of our function is: %d", ft_isdigit(c));
	printf("\n Result of libc function is: %d", isdigit(c));
}*/
