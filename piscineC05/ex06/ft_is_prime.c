#include <stdio.h>

int	ft_is_prime(int nb)
{
	long int	i;
	long int	lnb;

	lnb = nb;
	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= lnb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_is_prime(17));
}

//DONE