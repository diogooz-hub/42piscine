#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char *av[])
{
	int	i;
	int	n;

	n = 1;
	while (n < ac)
	{
		i = 0;
		while (av[n][i] != '\0')
		{
			ft_putchar(av[n][i]);
			i++;
		}
		ft_putchar('\n');
		n++;
	}
	return (0);
}