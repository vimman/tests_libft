#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc < 2 && argc > 4)
	{
		printf("Wrong number of arguments");
		return (1);
	}
	//else if (strcmp(argv[1], "memset"))
	//{
	//	printf("REAL = %s\n", (char *)memset(argv[2], atoi(argv[3]), atoi(argv[4])));
	//	printf("YOU = %s\n", (char *)ft_memset(argv[2], atoi(argv[3]), atoi(argv[4])));
	//}
	//else if (strcmp(argv[1], "bzero"))
	//{
	//	char str[] = "J'ai la belle vie en Normandie";
	//	char str1[] = "J'ai la belle vie en Normandie";

	//	bzero(str, (size_t)argv[2]);
	//	ft_bzero(str1, (size_t)argv[2]);

	//	printf("REAL = %s\n", str);
	//	printf("YOU = %s\n", str1);
	//}
	//else if (strcmp(argv[1], "memcpy"))
	//{
	//	printf("REAL = %s\n", memcpy((void *)argv[2], (void *)argv[3], atoi(argv[4])));
	//	printf("YOU = %s\n", ft_memcpy((void *)argv[2], (void *)argv[3], atoi(argv[4])));
	//}
	else if (atoi(argv[1]) == 8)
	{
		printf("REAL = %zu\n", strlen(argv[2]));
		printf("YOU = %zu\n", ft_strlen(argv[2]));
	}
	else if (atoi(argv[1]) == 9)
	{
		printf("REAL = %s\n", strdup(argv[2]));
		printf("YOU = %s\n", ft_strdup(argv[2]));
	}

	else if (atoi(argv[1]) == 10)
	{
		printf("REAL = %s\n", strcpy(argv[3], argv[2]));
		printf("YOU = %s\n", ft_strcpy(argv[3], argv[2]));
	}

	else if (atoi(argv[1]) == 11)
	{
		printf("REAL = %s\n", strncpy(argv[3], argv[2], atoi(argv[4])));
		printf("YOU = %s\n", ft_strncpy(argv[3], argv[2], atoi(argv[4])));
	}

	else if (atoi(argv[1]) == 12)
	{
		printf("REAL = %s\n", strcat(argv[3], argv[2]));
		printf("YOU = %s\n", ft_strcat(argv[3], argv[2]));
	}

	else if (atoi(argv[1]) == 13)
	{
		printf("REAL = %s\n", strncat(argv[3], argv[2], atoi(argv[4])));
		printf("YOU = %s\n", ft_strncat(argv[3], argv[2], atoi(argv[4])));
	}

	else if (atoi(argv[1]) == 14)
	{
		printf("REAL = %zu\n", strlcat(argv[3], argv[2], atoi(argv[4])));
		printf("YOU = %zu\n", ft_strlcat(argv[3], argv[2], atoi(argv[4])));
	}

	else
		printf("Il faut arreter de boire tres cher...");
	return (0);
}
