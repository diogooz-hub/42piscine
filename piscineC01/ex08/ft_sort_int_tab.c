#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab (int *tab, int size)
{
	int	i;
	int aux;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
				{
					aux = tab[i];
					tab[i] = tab[i + 1];
					tab [i + 1] = aux;
				}
			i++;
		}
		size--;
	}
}

int	main (void)
{
	int	array [10] = {34, 2, 5, 4, 8, 40, 7, 45, 9, 10};
	int	size;
	int	i;

	size = 10;
	i = 0;
	ft_sort_int_tab (array, size);
	while (i < size)
	{
		printf("%d,", array[i]);
		i++;
	}
	return(0);
}

//DONE