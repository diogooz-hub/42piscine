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

unsigned	int	ft_strlcat(char *dest, char *src, unsigned	int size)
{
	unsigned	int	i;
	unsigned	int	d;
	unsigned	int	s;
	unsigned	int	n;

	s = check_len(src);
	d = check_len(dest);
	n = d;

	i = 0;
	while (src [i] != '\0' && i + n < (size - 1))
	{
		dest[n] = src[i];
		i++;
		n++;
	}
	return (s + d);
}

/*
int	main(void)
{
	char str[] = "sou o diogo";
	char str1[] = "diogo";
	unsigned	int n;
	
	n = 11;
	printf("%u\n", ft_strlcat(str, str1, n));
	printf("%lu\n", strlcat(str, str1, n));
	return (0);
}
*/

int	main(void)
{
	char	real_dest[120] = "Hello";
	char	dest[120] = "Hello";
	char	*src = "world";

	printf("size is: %lu and dest is: %s\n", strlcat(real_dest, src, 7), real_dest);
	printf("size is: %u and dest is: %s\n", ft_strlcat(dest, src, 7), dest);
	return (0);
}