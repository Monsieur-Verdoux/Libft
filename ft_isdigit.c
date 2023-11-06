/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:34:15 by akovalev          #+#    #+#             */
/*   Updated: 2023/11/06 14:23:18 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION         top
       isdigit()
              checks for a digit (0 through 9).
RETURN VALUE         top
       The values returned are nonzero if the character c falls into the
       tested class, and zero if not.*/

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}
