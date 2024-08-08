/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 16:06:56 by mwallis           #+#    #+#             */
/*   Updated: 2024/08/01 17:39:23 by mwallis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	x;

	x = 1;
	if (nb == 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	while (x <= (nb / 2))
	{
		if (x * x == nb)
		{
			return (x);
		}
		x++;
	}
	return (0);
}

/*int	main(void)
{	
	int nombre;
	nombre = 144;

	printf("la racine carre de %d est %d", nombre, ft_sqrt(nombre));

	return (0);
}*/
