#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if(s1[i] > s2[i])
		return (1);

		if(s2[i] > s1[i])
		return (-1);
		i++;
	}
	return(0);
}


int	main(void)
{
	char str[] = "Hello  ";
	char str1[] = "Hello ";

	printf("%d\n", ft_strcmp(str, str1));
	printf("%d\n", strcmp(str, str1));
	return (0);
}


//DONE