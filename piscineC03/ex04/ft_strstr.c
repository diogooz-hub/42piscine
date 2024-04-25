#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strstr(char *str, char *find)
{
	int	i;
	int	n;

	i = 0;
	while (str[i] != '\0')
	{	
		n = 0;
		while (find[n] == str[i + n] && str[i + n] != '\0')
		{
			if (find[n + 1] == '\0')
			{
				return (&str[i]);
			}
			n++;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char str[] = "sou o diogo";
	char str1[] = "diogo";

	printf("%s\n", ft_strstr(str, str1));
	printf("%s\n", strstr(str, str1));
	return (0);
}

//DONE