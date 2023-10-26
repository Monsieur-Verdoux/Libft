#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	test[20] = "learning";
	char	target[20] = "learning";
	char	attach[20] = " is fun";
	size_t	ft;
	size_t	orginal;

	printf("*** ft results ********\n");
	ft = ft_strlcat(test, attach, 4);
	printf("-> %s\n", test);
	printf("*** orginal results ***\n");
	orginal = strlcat(target, attach, 4);
	printf("-> %s\n", target);
	if (ft == orginal)
		printf("The return values are the same");
	else
		printf("The return values are not the same");
	return (0);
}
