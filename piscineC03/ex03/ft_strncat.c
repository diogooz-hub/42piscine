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

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	int len;
	int	i;

	i = 0;
	len = check_len(dest);
	while (i < n && src [i] != '\0')
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
	char str1[] = " sou o diogo";
	unsigned int	n;

	n = 5;
	printf("%s\n", ft_strncat(str, str1, n));
	printf("%s\n", strncat(str, str1, n));
	return (0);
}

//DONE