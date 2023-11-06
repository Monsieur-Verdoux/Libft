/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:04:03 by akovalev          #+#    #+#             */
/*   Updated: 2023/11/06 14:01:03 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION         top
       These functions convert lowercase letters to uppercase, and vice
       versa.

       If c is a lowercase letter, toupper() returns its uppercase
       equivalent, if an uppercase representation exists in the current
       locale.  Otherwise, it returns c.  The toupper_l() function
       performs the same task, but uses the locale referred to by the
       locale handle locale.

       If c is an uppercase letter, tolower() returns its lowercase
       equivalent, if a lowercase representation exists in the current
       locale.  Otherwise, it returns c.  The tolower_l() function
       performs the same task, but uses the locale referred to by the
       locale handle locale.

       If c is neither an unsigned char value nor EOF, the behavior of
       these functions is undefined.

       The behavior of toupper_l() and tolower_l() is undefined if
       locale is the special locale object LC_GLOBAL_LOCALE (see
       duplocale(3)) or is not a valid locale object handle.
RETURN VALUE         top
       The value returned is that of the converted letter, or c if the
       conversion was not possible.*/

int	ft_toupper(int c)
{
	if (c >= 0 && c <= 255)
	{
		if (97 <= c && c <= 122)
			c = c - 32;
	}
	return (c);
}
