#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	check_len (char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

char	*ft_strcat(char *dest, char *src)
{
	int n;
	int	i;

	i = 0;
	n = check_len(dest);
	while (src [i] != '\0')
	{
		dest[n] = src[i];
		i++;
		n++;
	}
	return (dest);
}

int	main(void)
{
	char str[40] = "hallo bla bla ";
	char str1[] = "sou o diogo";

	printf("%s\n", ft_strcat(str, str1));
	printf("%s\n", strcat(str, str1));
	return (0);
}

//DONE