#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric (char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 48 || str[i] > 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char *str = "123a";

	printf("%d\n", ft_str_is_numeric(str));
	return (0);
}

//DONE