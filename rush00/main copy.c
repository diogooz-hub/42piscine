/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 18:20:49 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/09/11 19:15:30 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	strtoint(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i] != '\0')
	{
		res = res * 10 + str[i] - 48;
		i ++;
	}
	return (res);
}

int	ft_isint(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
			return (0);
		i ++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc == 3)
	{
		if (ft_isint(argv[1]) == 1 && ft_isint(argv[2]) == 1)
		{
			x = strtoint(argv[1]);
			y = strtoint(argv[2]);
			rush(x, y);
		}
	}
	return (0);
}
