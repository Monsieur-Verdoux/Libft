#include "libft.h"
#include <string.h>
#include <stdio.h>

void	init(char *test)
{
	int	i;
	int	len;

	i = 0;
	len = (int)ft_strlen("Learning is fun");
	while (i < 20)
	{
		if (i < len)
		{
			test[i] = "Learning is fun"[i];
			i++;
		}
		else
		{
			test[i] = '\0';
			i++;
		}
	}
}

int	main(void)
{
	char	test[20];
	char	target[20];
	size_t	ft;
	size_t	orginal;

	init(test);
	init(target);
	printf("*** ft results ********\n");
	ft = ft_strlcat(test, test + 7, 5);
	printf("-> %s\n", test);
	printf("*** orginal results ***\n");
	orginal = strlcat(target, target + 7, 5);
	printf("-> %s\n", target);
	if (ft == orginal)
		printf("The return values are the same");
	else
		printf("The return values are not the same");
	return (0);
}
