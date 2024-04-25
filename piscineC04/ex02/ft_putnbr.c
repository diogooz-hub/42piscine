#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if(nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2147483648", 10);
	}
	if(nb == 2147483647)
	{
		write(1, "2147483647", 10);	
	}
	if (nb > 9)
	{
		ft_putnbr(nb/10);
		ft_putnbr(nb%10);
	}
	if(nb < 0 && nb != -2147483648)
	{
		write(1, "-", 1);
		ft_putnbr(-1 * nb);
	}
	if (nb <= 9 && nb >= 0)
	{
		ft_putstr(nb + 48);
	}
	
}

int	main(void)
{
	ft_putnbr(-2147483);
}

// -2147483648 min
// 2147483647 max

//DONE