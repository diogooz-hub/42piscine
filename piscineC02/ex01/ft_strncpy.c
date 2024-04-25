#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int	n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}


int	main(void)
{
	char *src = "abcde";
	char dest[10];
	unsigned int	n;

	n = 6;
	ft_strncpy (dest, src, n);
	printf("%s\n", dest);
}

//DONE

/*
int	main(void)
{
	char	*src = "oi";
	char	dest[10] = "banana";
	char	dest_real[10];
	unsigned int	n;

	n = 2;
	ft_strncpy(dest, src, n);
	strncpy(dest_real, src, n);
	printf ("%s\n", dest);
	printf ("%s\n", dest_real);
	return (0);
}
*/