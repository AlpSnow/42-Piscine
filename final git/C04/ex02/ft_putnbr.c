/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:27:10 by mwallis           #+#    #+#             */
/*   Updated: 2024/07/30 16:13:11 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -1 * nb;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar((nb % 10) + '0');
	}
}

/*int	main(void)
{
	int nbr;
	int nbr2;
	int nbr3;
	int nbr4;

	nbr = -1354535213;
	nbr2 = 0;
	nbr3 = 1502;
	nbr4 = 200545221;

	ft_putnbr(nbr);
	ft_putchar('\n');
	ft_putnbr(nbr2);
	ft_putchar('\n');
	ft_putnbr(nbr3);
	ft_putchar('\n');
	ft_putnbr(nbr4);
}*/
