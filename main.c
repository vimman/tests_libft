#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc < 2 && argc > 4)
	{
		printf("Wrong number of arguments");
		return (1);
	}
	else if (strcmp(argv[1], "memset"))
	{
		printf("REAL = %s", (char *)memset(argv[2], atoi(argv[3]), atoi(argv[4])));
		printf("YOU = %s", (char *)ft_memset(argv[2], atoi(argv[3]), atoi(argv[4])));
	}
	else if (strcmp(argv[1], "bzero"))
	{
		char str[] = "J'ai la belle vie en Normandie";
		char str1[] = "J'ai la belle vie en Normandie";

		bzero(str, (size_t)argv[2]);
		ft_bzero(str1, (size_t)argv[2]);

		printf("REAL = %s", str);
		printf("YOU = %s", str1);
	}
	else if (strcmp(argv[1], "memcpy"))
	{
		printf("REAL = %s", memcpy((void *)argv[2], (void *)argv[3], atoi(argv[4])));
		printf("YOU = %s", ft_memcpy((void *)argv[2], (void *)argv[3], atoi(argv[4])));
	}
	else
		printf("Il faut arreter de boire tres cher...");
	return (0);
}
