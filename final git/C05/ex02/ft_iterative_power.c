/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 20:16:00 by mwallis           #+#    #+#             */
/*   Updated: 2024/07/31 20:29:17 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	resultat;

	i = 2;
	resultat = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power >= i)
	{
		resultat = resultat * nb;
		i++;
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
	ft_iterative_power(nbr, puissance));
}*/
