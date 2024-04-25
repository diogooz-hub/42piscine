#include <stdio.h>
#include <unistd.h>

int	ft_atoi (char *str)
{
	int	i;
	int count;
	int res;

	i = 0;
	count = 1;
	res = 0;
	while (str[i] == 32)
	{
		i++;
	}
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
		{
			count = count * -1;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	return (res * count);
}

int	main (void)
{
	char	str[] = " - --+12341";

	printf("%d\n", ft_atoi(str));
}

//DONE