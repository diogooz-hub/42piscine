#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha (char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 97 || str[i] > 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char *str = "abAd";

	printf("%d\n", ft_str_is_alpha(str));
	return (0);
}

//DONE