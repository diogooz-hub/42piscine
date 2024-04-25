#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod (int *a, int *b)
{
	int	aux1;
	int	aux2;

	aux1 = *a;
	aux2 = *b;

	*a = aux1 / aux2;
	*b = aux1 % aux2;
}

int	main (void)
{
	int	a;
	int	b;
	int	*pa;
	int	*pb;

	a = 10;
	b = 2;
	pa = &a;
	pb = &b;

	ft_ultimate_div_mod (pa, pb);
	printf ("%d\n%d", *pa, *pb);
	return (0);
}

//DONE