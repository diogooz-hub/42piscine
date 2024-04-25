#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[1];
	//char	dest_real[1];
	char	*src = "Hello";
	ft_strcpy (dest, src);
	//strcpy (dest_real, src);
	printf ("%s\n", dest);
	//printf ("%s\n", dest_real);
	return (0);
}

//DONE