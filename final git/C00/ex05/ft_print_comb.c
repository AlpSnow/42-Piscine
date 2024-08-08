/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:00:54 by mwallis           #+#    #+#             */
/*   Updated: 2024/07/18 20:39:14 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_showresult(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
}

void	ft_print_comb(void)
{
	int	centaine;
	int	dizaine;
	int	unite;

	centaine = '0';
	while (centaine <= '7')
	{
		dizaine = centaine + 1;
		while (dizaine <= '8')
		{
			unite = dizaine + 1;
			while (unite <= '9')
			{
				ft_showresult(centaine, dizaine, unite);
				if (centaine != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				unite++;
			}
			dizaine++;
		}
		centaine++;
	}
}

/*int	main(void)
{
	ft_print_comb();
}*/
