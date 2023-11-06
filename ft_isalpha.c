/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:33:39 by akovalev          #+#    #+#             */
/*   Updated: 2023/11/06 14:23:28 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION         top
       isalnum()
              checks for an alphanumeric character; it is equivalent to
              (isalpha(c) || isdigit(c)).
RETURN VALUE         top
       The values returned are nonzero if the character c falls into the
       tested class, and zero if not.*/

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}
