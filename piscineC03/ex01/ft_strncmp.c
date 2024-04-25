#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		return (1);

		if (s1[i] < s2[i])
		return (-1);
		i++;
	}
	return (0);
}

int	main(void)
{
	char str[] = "hallo ";
	char str1[] = "Hallo ";
	unsigned int	n;

	n = 4;
	printf("%d\n", ft_strncmp(str, str1, n));
	printf("%d\n", strncmp(str, str1, n));
	return (0);
}

//DONE