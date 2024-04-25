#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;		
	}

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if(!(str[i - 1] >= 'a' && str[i - 1] <= 'z') && (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z')))
			{
			str[i] = str[i] - 32;				
			}
		}
		i++;
	}
	return (str);
}

//DONE

int	main(void)
{
	char str[] = " salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(str));
	return (0);
}