#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy (char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	n = 0;
	while(src[n] != '\0')
	{
		n++;
	}
	i = 0;
	if (size > 0)
	{
		while ((src[i] != '\0') && (i <= size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return(n);
}

/*
int	main(void)
{
	char str[] = "Hello ";
	char dest[30];
	unsigned int	n;

	n = 6;
	printf("%u\n", ft_strlcpy(dest, str,n));
	printf("%lu\n", strlcpy(dest, str, n));
	return (0);
}
*/

int	main(void)
{
	char	*src = "Hello";
	char	dest[6];
	char	real_dest[6];
	
	printf("The return value is: %u and the string created is: %s\n", ft_strlcpy(dest, src, 0), dest);
	printf("The return value is: %lu and the string created is: %s\n", strlcpy(real_dest, src, 0), real_dest);
	return (0);
}

//DONE