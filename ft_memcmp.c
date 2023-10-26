/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:46:35 by akovalev          #+#    #+#             */
/*   Updated: 2023/10/26 19:45:53 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1ptr;
	unsigned char	*s2ptr;
	size_t			i;
	int				j;

	s1ptr = (unsigned char *)s1;
	s2ptr = (unsigned char *)s2;
	j = 0;
	i = 0;
	while (i < n - 1 && s1ptr[i] == s2ptr[i])
	{
		i++;
	}
	j = s1ptr[i] - s2ptr[i];
	return (j);

}

/*int	main(void)
{
	char    string1[] = "great";
    char    string2[] = "greet";
	size_t number = 6;
    int result;
	int check;
    
  result = ft_memcmp(string1, string2, number);
  check = memcmp(string1, string2, number);
  
  printf("result is: %d\ncheck is: %d\n", result, check);
  
  return 0;
}*/