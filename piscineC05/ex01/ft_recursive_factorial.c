#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
	return (0);
	
	else if (nb == 0)
	return (1);

	else if (nb > 1)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	return (nb);
}

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(3));
}