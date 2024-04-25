#include <stdio.h>
#include <unistd.h>

void	ft_div_mod (int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main (void)
{
	int	nbr;
	int	nbr1;
	int *div;
	int	*mod;
	int	res1;
	int	res2;

	nbr = 20;
	nbr1 = 1;
	div = &res1;
	mod = &res2;

	ft_div_mod(nbr, nbr1, div, mod);
	printf("%d\n%d", *div, *mod);
	return(0);
}

//DONE