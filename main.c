
#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc < 2 && argc > 4)
	{
		printf("Wrong number of arguments");
		return (1);
	}

	else if (atoi(argv[1]) == 1)
	{
		char 	*str;
		
		str = strdup(argv[2]);
		printf("REAL = %s\n", (unsigned char *)memset(argv[2], atoi(argv[3]), atoi(argv[4])));
		printf("YOU = %s\n", (unsigned char *)ft_memset(str, atoi(argv[3]), atoi(argv[4])));
		free(str);
	}

	else if (atoi(argv[1]) == 2)
	{
		int	i;
		int	j;
		char str[] = "J'ai la belle vie en Normandie";
		char str1[] = "J'ai la belle vie en Normandie";

		i = 0;
		j = 0;
		bzero(str, (size_t)atoi(argv[2]));
		ft_bzero(str1, (size_t)atoi(argv[2]));

		while (str[i] == 0)
			i++;
		while (str1[j] == 0)
			j++;
		printf("REAL = %s\n", &str[i]);
		printf("YOU = %s\n", &str1[i]);
	}
	else if (atoi(argv[1]) == 3)
	{
		char	*tmp;
		char	*tmp2;

		tmp = strdup(argv[2]);
		tmp2 = &argv[2][2];
		printf("REAL = %s\n", memcpy(tmp2, tmp, atoi(argv[3])));
		
		tmp = strdup(argv[2]);
		tmp2 = &argv[2][2];
		printf("YOU = %s\n", ft_memcpy(tmp2, tmp, atoi(argv[3])));
		free(tmp);
	}

	else if (atoi(argv[1]) == 4)
	{
		char *msg = "This is the string: not copied";
		char buffer[80];
		ft_memset( buffer, '\0', 80 );
		ft_memccpy( buffer, msg, ':', 80 );
		printf( "%s\n", buffer );
			
		char	*tmp;
		char	*tmp2;

		tmp2 = strdup(argv[2]);
		tmp = strdup(argv[3]);
		printf("REAL = %s\n", ft_memccpy(tmp2, tmp, (int)argv[4], atoi(argv[5])));
		printf("%s\n", tmp2);

		tmp2 = strdup(argv[2]);
		tmp = strdup(argv[3]);
		printf("YOU = %s\n", ft_memccpy(tmp2, tmp, (int)argv[4], atoi(argv[5])));
		printf("%s\n", tmp2);
		free(tmp);
		free(tmp2);
	}

	else if (atoi(argv[1]) == 5)
	{
		char	*tmp;
		char	*tmp2;

		tmp = strdup(argv[2]);
		tmp2 = &argv[2][2];
		printf("REAL = %s\n", memmove(tmp2, tmp, atoi(argv[3])));

		tmp = strdup(argv[2]);
		tmp2 = &argv[2][2];
		printf("YOU = %s\n", ft_memmove(tmp2, tmp, atoi(argv[3])));
		free(tmp);
	}

	else if (atoi(argv[1]) == 6)
	{
		const char str[] = "http://www.tutorialspoint.com";
		const char ch = 'u';
		char *ret;

		ret = ft_memchr(str, ch, strlen(str));

		printf("String after |%c| is - |%s|\n", ch, ret);

		char	*tmp;

		tmp = strdup(argv[2]);
		printf("REAL = %s\n", memchr(tmp, atoi(argv[3]), atoi(argv[4])));

		tmp = strdup(argv[2]);
		printf("YOU = %s\n", ft_memchr(tmp, atoi(argv[3]), atoi(argv[4])));
		free(tmp);
	}

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
	else if (atoi(argv[1]) == 21)
	{
		printf("REAL = %d\n", atoi(argv[2]));
		printf("YOU = %d\n", ft_atoi(argv[2]));
	}
//	else if (atoi(argv[1]) == 22)
//	{
//		int	i;
//
//		i =  - 10;
//		while (i < 255)
//		{
//			
//
	else
		printf("Il faut arreter de boire tres cher...");
	return (0);
}
