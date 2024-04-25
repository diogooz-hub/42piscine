#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha (char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (!(str [i] >= 32 && str [i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char *str = "A";

	printf("%d\n", ft_str_is_alpha(str));
	return (0);
}

//DONE