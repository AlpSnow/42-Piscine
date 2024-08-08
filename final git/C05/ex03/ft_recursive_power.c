/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 20:31:26 by mwallis           #+#    #+#             */
/*   Updated: 2024/07/31 23:41:46 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	resultat;

	resultat = 0;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power >= 1)
	{
		resultat = nb * ft_recursive_power(nb, (power - 1));
	}
	return (resultat);
}

/*int	main(void)
{
	int nbr;
	int puissance;

	nbr = 3;
	puissance = 4;

	printf("%d a la puissance %d donne : %d", nbr, puissance,
	ft_recursive_power(nbr, puissance));
	return (0);
}*/
