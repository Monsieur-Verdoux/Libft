/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:20:52 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/31 13:57:08 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Function name ft_putnbr_fd
Prototype void ft_putnbr_fd(int n, int fd);
Turn in files -
Parameters n: The integer to output.
fd: The file descriptor on which to write.
Return value None
External functs. write
Description Outputs the integer ’n’ to the given file
descriptor.*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		n = n % 10;
	}
	if (n <= 9)
	{
		ft_putchar_fd(n + 48, fd);
	}
	return ;
}

/*int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	write (1, "\n", 1);
	ft_putnbr_fd(345, 1);
	write (1, "\n", 1);
	ft_putnbr_fd(2147483647, 1);
	write (1, "\n", 1);
	ft_putnbr_fd(-2344, 1);
	write (1, "\n", 1);
	ft_putnbr_fd(0, 1);
	write (1, "\n", 1);
	ft_putnbr_fd(42, 1);
	write (1, "\n", 1);
}*/